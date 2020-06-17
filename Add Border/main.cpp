std::vector<std::string> addBorder(std::vector<std::string> picture) {

    for(string &s:picture) s = "*" + s + "*";

    std::string stripe = string(picture[0].size(),'*');
    picture.insert(picture.begin(), stripe);
    picture.insert(picture.end(), stripe);

    return picture;
}
