string timeConversion(string s) {
    string ans = "";
    if (s[8] == 'A') {
        ans = s.substr(0,8);
        if (s[0] == '1' && s[1] == '2') {
            ans = "00" + s.substr(2,6);
        }
    }
    else {
        if (s[0] == '1' && s[1] == '2') {
            ans = s.substr(0,8);
        }
        else {
            ans = to_string(stoi(s.substr(0,2)) + 12) + s.substr(2, 6);
        }
    }
    return ans;
}