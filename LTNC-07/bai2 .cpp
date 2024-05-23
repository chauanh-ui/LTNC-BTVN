#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v;
    char c;
    for(int i = 0; i < 4; i++)
    {
        cin >> c;
        v.push_back(c);
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                cout << v[i] << v[j] << v[k] << endl;
            }
        }
    }
    return 0;
}
