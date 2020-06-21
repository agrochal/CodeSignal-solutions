std::vector<std::vector<int>> spiralNumbers(int n) {
    int nr = 1;
    int y = -1,x = 0;
    int p = 0;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    std::vector<std::vector<int>> res;
    for(int i=0;i<n;i++){
        std::vector<int> tmp;
        for(int j=0;j<n;j++){
            tmp.push_back(0);
        }
        res.push_back(tmp);
    }
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=n-i/2;j++){
            x += dx[p];
            y += dy[p];
            res[x][y] = nr;
            nr++;

        }
       p = (p+1)%4;
    }
    return res;
}
