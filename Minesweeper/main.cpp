std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    std::vector<std::vector<int>> res;
    for(int i=0;i<matrix.size();i++){
        std::vector <int> row;
        for(int j=0;j<matrix[0].size();j++){
            row.push_back(0);
        }
        res.push_back(row);
    }

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]){
                res[i][j]--;
                for(int k=-1;k<2;k++){
                    for(int l=-1;l<2;l++){
                        if(j+l>=0&&i+k>=0&&i+k<=matrix.size()-1&&j+l<=matrix[i+k].size()-1)
                            res[i+k][j+l]++;
                    }
                }
            }
        }
    }
    return res;
}
