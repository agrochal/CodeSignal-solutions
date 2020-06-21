std::string longestDigitsPrefix(std::string inputString) {
    std::string res = "";
    for(char c:inputString){
        if(isdigit(c)) res+=c;
        else break;
    }
    return res;
}
