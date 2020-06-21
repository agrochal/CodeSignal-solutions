bool bishopAndPawn(std::string bishop, std::string pawn) {
    int bl = bishop[0] - 'a' + 1;
    int br = bishop[1] - '1' + 1;
    int pl = pawn[0] - 'a' + 1;
    int pr = pawn[1] - '1' + 1;
    return (bl!=pl&&br!=pr)&&(bl%2==br%2)==(pl%2==pr%2);
}
