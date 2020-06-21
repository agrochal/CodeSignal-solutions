int digitDegree(int n) {
    int res = 0;
    while(n%10!=n){
        int tmp = n;
        int sum = 0;
        while(tmp){
            sum += tmp%10;
            tmp /= 10;
        }
        sum += tmp%10;
        n = sum;
        res++;
    }
    return res;
}
