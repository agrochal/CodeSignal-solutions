int differentSquares(std::vector<std::vector<int>> matrix) {
    std::set<std::vector<std::vector<int>>> l;
    std::vector<std::vector<int>> square = {{0,0},{0,0}};
    for(int i=0;i<matrix.size()-1;i++){
        for(int j=0;j<matrix[0].size()-1;j++){
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                    square[k][l] = matrix[i+k][j+l];
                }
            }
            l.insert(square);
        }
    }

    return l.size();
}
