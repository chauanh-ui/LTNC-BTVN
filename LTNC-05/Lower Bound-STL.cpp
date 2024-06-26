#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector<int> v;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q; cin>> q;
    vector<int>::iterator it;
    while (q--) {
        int x;
        cin >> x;
        it = lower_bound(v.begin(), v.end(), x);
        if(*it == x)
        {
            cout << "Yes " << it - v.begin() + 1 << endl;
        }
        else cout << "No " << it - v.begin() + 1 << endl;
    }
    return 0;
}

