int commonCharacterCount(std::string s1, std::string s2) {

    int alph1[26] = {0};
    int alph2[26] = {0};

    for(char c:s1) alph1[c-'a']++;

    for(char c:s2) alph2[c-'a']++;

    int result = 0;
    for(int i=0;i<26;i++) result += min(alph1[i],alph2[i]);

    return result;
}
