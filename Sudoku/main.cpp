bool sudoku(std::vector<std::vector<int>> grid) {

    for(int i=0;i<9;i++){
        std::set <int> tmp;
        for(int j=0;j<9;j++){
            tmp.insert(grid[i][j]);
        }
        if(tmp.size()!=9) return false;
    }

    for(int i=0;i<9;i++){
        std::set <int> tmp;
        for(int j=0;j<9;j++){
            tmp.insert(grid[j][i]);
        }
        if(tmp.size()!=9) return false;
    }

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                std::set <int> tmp;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        tmp.insert(grid[k][l]);
                    }
                }
                if(tmp.size()!=9) return false;
            }
        }


    return true;
}
