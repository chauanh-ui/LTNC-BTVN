#include <iostream>

#define horizontal 0
#define vertical 1

using namespace std;

char board[10][10];
string words[10];

//Kiểm tra một từ có điền được vào một vị trí i, j cụ thể trên bảng hay không
//Check theo chiều ngang hoặc dọc dựa theo param direct
bool checkValid(char board[10][10], string word, int row, int col, int direct){
    int length = word.length();
    // AGRA

    for(int i = 0; i < length; i++){

        if(direct == horizontal){
            if (col + length > 10) return false;
            if( board[row][col+i] != '-' && board[row][col+i] != word[i] ){
                return false;
            }
        }
        else {
            if (row + length > 10) return false;
            if( board[row+i][col] != '-' && board[row+i][col] != word[i] ){
                return false;
            }
        }
    }

    return true;
}

// thực hiện điền một từ vào board tại vị trí i, j, theo chiều ngang hoặc dọc, trả về một board mới
void fillWord(char board[10][10], char new_board[10][10], string word, int row, int col, int direct){
    int length = word.length();

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            new_board[i][j] = board[i][j];
        }
    }


    for(int i = 0; i < length; i++){

        if(direct == horizontal){
            new_board[row][col+i] = word[i];
        }
        else {
            new_board[row+i][col] = word[i];
        }
    }

}


bool solve (char board[10][10], string words[10], int words_size, int word_index){
    if (word_index == words_size){
        //print solution
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cout << board[i][j];
            }
            cout << endl;
        }
        return true;
    }

    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 10; j++){

            char new_board[10][10];

            if(checkValid(board, words[word_index], i, j, horizontal)){

                fillWord(board, new_board, words[word_index], i, j, horizontal);

                if (solve(new_board, words, words_size, word_index+1)) {
                    return true;
                }
            }

            if(checkValid(board, words[word_index], i, j, vertical)){
                fillWord(board, new_board, words[word_index], i, j, vertical);

                if (solve(new_board, words, words_size, word_index+1)) {
                    return true;
                }
            }
        }
    }

    return false;
}


int main()
{
    // nhap input
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> board[i][j];
        }
    }

    string crossword_item;
    cin >> crossword_item;
    crossword_item += ";";

    // tach words thanh cac tu
    string s = "";
    int words_size = 0;
    for (char c : crossword_item)
    {
        if (c == ';')
        {
            words[words_size] = s;
            words_size++;
            s = "";
        }
        else
        {
            s += c;
        }
    }
    //done

    //main
    int word_index = 0;
    solve(board, words, words_size, word_index);

    return 0;
}
