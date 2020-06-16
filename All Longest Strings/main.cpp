std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    int l = 0;
    std::vector<std::string> r;

    for(std::string x:inputArray) l = max(l,(int)x.length());

    for(std::string x:inputArray) if(x.length()==l) r.push_back(x);

    return r;
}
