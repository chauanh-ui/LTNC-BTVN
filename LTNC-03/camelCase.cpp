int camelcase(string s) {
    int n = s.length();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            cnt++;
        }
    }
    return cnt + 1;
}