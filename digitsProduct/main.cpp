int digitsProduct(int product) {
    if(product==0) return 10;
    int mul = 1;
    int res = 0;
    while(product%10!=product){
        bool test = false;
        for(int i=9;i>=2;i--){
            if(product%i==0){
                test = true;
                res += i*mul;
                mul *= 10;
                product /= i;
                break;
            }
        }
        if(!test) return -1;
    }
    res += product*mul;

    return res;
}
