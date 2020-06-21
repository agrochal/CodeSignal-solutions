std::string buildPalindrome(std::string st) {
    std::string tmp = "";
    int index = -1;
    for(int i=st.size()-1;i>=0;i--){
        tmp += st[i];
        if(tmp == string(tmp.rbegin(),tmp.rend())){
            index = i-1;
        }
    }
    for(int i=index;i>=0;i--){
        st += st[i];
    }

    return st;
}
