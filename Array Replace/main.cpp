std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for(int &x:inputArray){
        if(x==elemToReplace) x = substitutionElem;
    }
    return inputArray;
}
