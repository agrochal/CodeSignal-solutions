std::string lineEncoding(std::string s) {
    std::string res = "";
    int c = 1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) c++;
        else {
            if(c!=1) res += to_string(c);
            res += s[i-1];
            c = 1;
        }
    }
    if(c!=1) res += to_string(c);
    res += s[s.length()-1];
    return res;
}
