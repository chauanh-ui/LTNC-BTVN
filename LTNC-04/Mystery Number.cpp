#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int sum1 = 0, sum2 = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum1 += x;
    }
    for (int i = 0; i < n + 1; i++) {
        cin >> x;
        sum2 += x;
    }
    cout << sum2 - sum1;
    return 0; 
}
