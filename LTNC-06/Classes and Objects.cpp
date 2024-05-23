class Student{
    private:
       vector<int> scores;
    public:
        void input(){
            for (int i = 0; i < 5; i++){
               int x;
               cin >> x;
               scores.push_back(x);
            }
        }
        int calculateTotalScore(){
            int sum = 0;
            for (int i = 0; i < 5; i++){
                sum += scores[i];
            }
            return sum;
        }
};
