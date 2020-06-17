bool isIPv4Address(std::string inputString) {
    std::string curr = "";
    int cnt = 0;
    bool dt = false;

    for(char c:inputString){
        if(isdigit(c)){
            if(curr=="0") return false;
            curr += c;
            dt = false;
        } else if(c=='.'){
            if(dt) return false;
            dt = true;
            if(curr!=""){
                unsigned long long num = atoi(curr.c_str());
                if(num>255) return false;
                curr = "";
                cnt++;
            }
        } else return false;
    }
    unsigned long long num = atoi(curr.c_str());

    if(num>255||cnt!=3) return false;

    return true;
}
