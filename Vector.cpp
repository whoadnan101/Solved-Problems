#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for (int i=0; i<=n; i++){
        cout<<v1[i]<<endl;
    }
}