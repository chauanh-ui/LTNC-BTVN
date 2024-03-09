int findDigits(int n) {
    int cnt = 0;
    int tmp = n;
    while (n > 0) {
        int rem = n % 10;
        if (rem != 0 && tmp % rem == 0) {
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}