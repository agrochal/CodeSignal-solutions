std::string alphabeticShift(std::string inputString) {
    for(char &c:inputString){
        c = (c + 1 - 'a')%26 + 'a';
    }
    return inputString;
}
