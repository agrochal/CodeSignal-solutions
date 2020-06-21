string getNumber(string s){
    std::string res = "";
    for(int i=s.length()-2;i>=0;i--){
        if(isdigit(s[i])) res += s[i];
        else break;
    }
    reverse(res.begin(),res.end());
    int num = atoi(res.c_str());
    num++;
    return to_string(num);
}

std::vector<std::string> fileNaming(std::vector<std::string> names) {
    std::vector <bool> changed;
    for(int i=0;i<names.size();i++) changed.push_back(false);
    for(int i=1;i<names.size();i++){
        bool clear = true;
        while(clear) {
            for(int j=i-1;j>=0;j--){
                if(names[i]==names[j]){
                    if(names[j][names[j].length()-1]==')'&&changed[i]){
                        int index = -1;
                        for(int k=names[i].length()-2;k>=0;k--){
                            if(!isdigit(names[i][k])){
                                index = k;
                                break;
                            }
                        }
                        names[i].erase(index);
                        names[i] += "(" + getNumber(names[j]) + ")";

                    } else {
                        names[i] += "(1)";
                        changed[i] = true;
                    }
                    j = i;
                    continue;
                }
            }
            clear = false;
        }
    }
    return names;
}
