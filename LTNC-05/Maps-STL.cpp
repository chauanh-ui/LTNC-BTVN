#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q; cin >> q;
    map<string, int> mp;
    while(q--) {
        int t;
        string name;
        cin >> t >> name;
        if (t == 1) {
            int diem; cin >> diem;
            mp[name] += diem;
        } else if (t == 2) {
            mp.erase(name);
        } else if (t == 3) {
            if (mp.find(name) != mp.end()) {
                cout << mp[name] << endl;
            } else {
                cout << 0 << endl;
            }
        }
        
    }   
    return 0;
}




