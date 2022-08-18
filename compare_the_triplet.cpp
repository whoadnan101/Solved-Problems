//compare the triplet function.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int m=0,n=0;
    vector<int>x;
    for(int i=0; i<a.size(); i++){
        if(a[i]>b[i]){
            m++;
        }
        else if(b[i]>a[i]){
            n++;
        }
        else{
            continue;
        }
    }
        x.push_back(m);
        x.push_back(n);
        return x;
}