std::vector<int> alternatingSums(std::vector<int> a) {
    std::vector<int> team = {0,0};

    for(int i=0;i<a.size();i++) {
        team[i%2] += a[i];
    }
    return team;
}
