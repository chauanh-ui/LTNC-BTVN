#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q; cin >> q;
    set<int> se;
    while (q--) {
        int type, x; cin >> type >> x;
        if (type == 1) {
            se.insert(x);
        }
        else if (type == 2) {
            se.erase(x);
        } else if (type == 3) {
            if (se.find(x) != se.end()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}




