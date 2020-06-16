int adjacentElementsProduct(std::vector<int> inputArray) {
    int result = -1001;
    for(int i=1;i<inputArray.size();i++){
        result = max(result, inputArray[i]*inputArray[i-1]);
    }
    return result;
}
