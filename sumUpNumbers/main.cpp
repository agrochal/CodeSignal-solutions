int sumUpNumbers(std::string inputString) {
    std::string actual = "";
    int sum = 0;
    for(char c:inputString){
        if(isdigit(c)) actual += c;
        else {
            int tmp = atoi(actual.c_str());
            sum += tmp;
            actual = "";
        }
    }
    int tmp = atoi(actual.c_str());
    sum += tmp;
    return sum;
}
