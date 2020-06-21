int electionsWinners(std::vector<int> votes, int k) {
    int actmax = -1;
    int c = 0;
    for(int x:votes){
        if(x>actmax){
            actmax = x;
            c = 1;
        } else if(x==actmax) c++;
    }
    int res = 0;
    for(int x:votes){
        int potential = x + k;
        if(potential>actmax) res++;
    }
    return (res==0&&c==1) ? 1 : res;
}
