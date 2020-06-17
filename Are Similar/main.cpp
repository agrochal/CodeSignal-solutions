bool areSimilar(std::vector<int> a, std::vector<int> b) {
    if(a == b) return true;
    int c = 0;
    std::vector<int> diff;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            c++;
            diff.push_back(i);
        }
    }
    if(c==2){
        if(a[diff[0]]==b[diff[1]]&&a[diff[1]]==b[diff[0]]) return true;
    } else if(c==0) return true;
    else if (c>2) return false;

    return false;
}
