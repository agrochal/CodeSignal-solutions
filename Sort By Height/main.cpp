std::vector<int> sortByHeight(std::vector<int> a) {
    std::vector<int> t;
    for(int x:a)
        if(x!=-1) t.push_back(x);

    sort(t.begin(), t.end());

    int p = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=-1){
            a[i] = t[p];
            p++;
        }
    }
    return a;
}
