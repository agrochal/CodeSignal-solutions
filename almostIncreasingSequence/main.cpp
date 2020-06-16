bool almostIncreasingSequence(std::vector<int> sequence) {
    int x = 0;
    for(int i=0;i<sequence.size();i++){
        if(i-1>=0&&sequence[i]<=sequence[i-1]){
            x++;
            if(i-2>=0&&i+1<sequence.size()&&sequence[i]<=sequence[i-2]&&sequence[i+1]<=sequence[i-1]){
                return false;
            }
        }
    }
    return x <= 1;
}
