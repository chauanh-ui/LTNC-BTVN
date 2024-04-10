#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q; cin >> n >> q;
    vector<vector<int>> v;
    vector<int> vp;
    while(n--) {
        int x; cin >> x;
        vp.clear();
        while(x--) {
            int num; cin >> num;
            vp.push_back(num);
        }
        v.push_back(vp);
    }
    int i, j; 
    while (q--) {
        cin >> i >> j;
        cout << v[i][j] << endl;
    }
    return 0;
}
