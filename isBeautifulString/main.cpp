bool isBeautifulString(std::string inputString) {
    int alp[26] = {0};

    for(char c:inputString){
        alp[c-'a']++;
    }

    for(int i=1;i<26;i++){
        if(alp[i]>alp[i-1]) return false;
    }
    return true;
}
