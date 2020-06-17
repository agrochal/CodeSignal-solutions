bool palindromeRearranging(std::string inputString) {
    int abc[26] = {0};

    for(char c:inputString) abc[c-'a']++;

    bool b = false;
    for(int i=0;i<26;i++){
        if(!abc[i]) continue;
        if(abc[i]%2!=0){
            if(!b) b = !b;
            else return false;
        }
    }
    return true;
}
