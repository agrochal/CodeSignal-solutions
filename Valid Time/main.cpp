bool validTime(std::string time) {
    int left = atoi((time.substr(0,2)).c_str());
    int right = atoi((time.substr(3,5)).c_str());
    if(left>23) return false;
    if(right>59) return false;
    return true;
}
