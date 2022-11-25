/*Circular Array Rotaion*/

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
        k=k%a.size();
        int l=a.size();
        for(int i=0;i<queries.size();i++){
            int pos=(queries[i]-k+l)%l;
            queries[i]=a[pos];
        }
        return queries;
}