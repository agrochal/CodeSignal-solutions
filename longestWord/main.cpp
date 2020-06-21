std::string longestWord(std::string text) {
    std::string word = "";
    std::string tmp = "";
    for(char c:text){
        if(isalpha(c)) tmp += c;
        else {
            if(tmp.length()>word.length()) word = tmp;
            tmp = "";
        }
    }
    if(tmp.length()>word.length()) word = tmp;
    return word;
}
