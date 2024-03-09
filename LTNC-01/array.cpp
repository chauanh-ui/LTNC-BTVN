#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define maxn 1000
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int a[maxn];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
}