bool chessBoardCellColor(std::string cell1, std::string cell2) {
    int c1l = cell1[0] - 'A' + 1;
    int c1r = cell1[1] - '1' + 1;
    int c2l = cell2[0] - 'A' + 1;
    int c2r = cell2[1] - '1' + 1;

    return (c1l%2==c1r%2)==(c2l%2==c2r%2);
}
