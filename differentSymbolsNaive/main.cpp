int differentSymbolsNaive(std::string s) {
    int alp[26] = {0};

    for(char c:s){
        alp[c-'a']++;
    }
    int res = 0;
    for(int i=0;i<26;i++){
        if(alp[i]!=0) res++;
    }
    return res;
}
