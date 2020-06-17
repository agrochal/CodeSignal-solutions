std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    std::vector <std::vector<int>> res;
    for(int i=1;i<image.size()-1;i++){
        std::vector<int> tmp;
        for(int j=1;j<image[0].size()-1;j++){
            int val  = 0;
            for(int k=-1;k<2;k++){
                for(int l=-1;l<2;l++){
                    val += image[i+k][j+l];
                }
            }
            val = floor(val/9);
            tmp.push_back(val);
        }
        res.push_back(tmp);
    }
    return res;
}
