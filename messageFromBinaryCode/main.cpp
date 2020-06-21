std::string messageFromBinaryCode(std::string code) {
    std::string res = "";
    for(int i=0;i<code.size();i+=8)
    {
        bitset<8> c (code.substr(i,8));
        res += c.to_ulong();
    }
    return res;
}
