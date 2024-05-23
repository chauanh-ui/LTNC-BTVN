#include <bits/stcd++.h>

using namespace std;

void solvePowerSum(int X, int N, int* count, int startValue)
{
    if(X < 0)
    {
        return;
    }

    if(X == 0)
    {
        *count = *count + 1;
        return;
    }
    for(int i = startValue; i >= 1; i--)
    {
        X = X - pow(i, N);
        solvePowerSum(X, N, count, i - 1);
        X = X + pow(i, N);
    }
}

int powerSum(int X, int N) {
    int startValue = floor( pow((double)X , 1.0 / N) );
    int *count = new int(0);

    solvePowerSum(X, N, count, startValue);
    return *count;
}
