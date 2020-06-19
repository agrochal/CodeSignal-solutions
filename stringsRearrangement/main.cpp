int diff(std::string s1, std::string s2){
    int c = 0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]) c++;
    }
    return c;
}
bool validate(std::vector<std::string> inputArray){
    for(int i=1;i<inputArray.size();i++){
        if(diff(inputArray[i],inputArray[i-1])!=1) return false;
    }
    return true;
}

bool stringsRearrangement(std::vector<std::string> inputArray) {
    sort(inputArray.begin(),inputArray.end());

    if(validate(inputArray)) return true;

    while(next_permutation(inputArray.begin(),inputArray.end())){
        if(validate(inputArray)) return true;
    }

    return false;
}
