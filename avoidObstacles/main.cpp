int avoidObstacles(std::vector<int> inputArray) {
    for(int i=1;i++;){
        bool b = true;
        for(int x:inputArray){
            if(x%i==0){
                b = false;
                break;
            }
        }
        if(b) return i;
    }
}
