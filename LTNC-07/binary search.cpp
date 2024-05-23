#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int> a, int low, int high, int x)
{
    if(low > high) return -1;
    int mid = (high + low) / 2;

    if(a[mid] == x) return mid;
    else if(a[mid] < x) return BinarySearch(a, mid + 1, high, x);
    else return BinarySearch(a, low, mid - 1, x);
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int x : a) cout << x << " ";
    cout << endl;
    cout << "Found " << num << " at position: " << BinarySearch(a, 0, n, num);

    return 0;
}
