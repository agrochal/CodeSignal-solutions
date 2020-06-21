bool insideBoard(int x, int y){
    return x>=0&&x<8&&y>=0&&y<8;
}
int chessKnight(std::string cell) {
    int res = 0;
    int cl = cell[0] - 'a';
    int cr = cell[1] - '1';

    if(insideBoard(cl+2,cr+1)) res++;
    if(insideBoard(cl+1,cr+2)) res++;
    if(insideBoard(cl-2,cr-1)) res++;
    if(insideBoard(cl-1,cr-2)) res++;
    if(insideBoard(cl+2,cr-1)) res++;
    if(insideBoard(cl-2,cr+1)) res++;
    if(insideBoard(cl+1,cr-2)) res++;
    if(insideBoard(cl-1,cr+2)) res++;

    return res;
}
