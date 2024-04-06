#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
  if (p < 1 || n <= 0) {
        return 0; 
    }

    // Calculate from the beginning and from the end
    int fromBeg = p / 2;
    int fromEnd = (n / 2) - (p / 2);

    return fromBeg < fromEnd ? fromBeg : fromEnd;
}
