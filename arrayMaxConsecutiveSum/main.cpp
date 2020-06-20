int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    int sum = 0;
    int res = -1;
    for(int i=0;i<inputArray.size();i++){
        if(i<k) sum += inputArray[i];
        else {
            res = max(res,sum);
            sum -= inputArray[i-k];
            sum += inputArray[i];
        }
    }
    return max(res,sum);
}
