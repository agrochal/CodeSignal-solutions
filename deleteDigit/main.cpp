int value(std::string s){
    int mul = 1;
    mul *= (s.length()-1)
    int sum = 0;
    for(int i=s.length()-1;i>=0;i--){
        sum += (s[i] - '1' + 1) * mul;
        mul *= 10;
    }
    return sum;
}
int deleteDigit(int n) {
    std::string s = to_string(n);
    int res = -1;
    for(int i=s.length()-1;i>=0;i--){
        std::string tmp = s;
        tmp.erase(tmp.begin()+i,tmp.begin()+i+1);
        res = max(res,value(tmp));
    }
    return res;
}
