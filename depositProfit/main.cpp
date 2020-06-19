int depositProfit(int deposit, int rate, int threshold) {
    int c = 0;
    double dep = deposit;
    while(dep<threshold){
        dep *= (100+rate)/100.0;
        c++;
    }
    return c;
}
