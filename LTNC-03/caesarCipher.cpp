string caesarCipher(string s, int k) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (islower(s[i])) {
            s[i] = (((s[i] - 'a') + k) % 26) + 'a';
        } 
        else if (isupper(s[i])){
            s[i] = (((s[i] - 'A') + k) % 26) + 'A';
        }
        
    }
    return s;
}