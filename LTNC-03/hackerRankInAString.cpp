string hackerrankInString(string s) {
    string w = "hackerrank";
    int n = s.length();
    int i = 0;
    for (char c : s) {
        if (w[i] == c) {
            i++;
        }
        if (i == w.length()) {
            return "YES";
        }
    }
    return "NO";
}