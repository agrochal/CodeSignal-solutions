bool isLucky(int n) {
    int d = std::to_string(n).length();
    int h1 = 0, h2 = 0;
    int half = d/2;
    for(int i=d-1;i>=0;i--){
        if(i>=half) h2 += n%10;
        else h1 += n%10;
        n /= 10;
    }

    return h1 == h2;
}
