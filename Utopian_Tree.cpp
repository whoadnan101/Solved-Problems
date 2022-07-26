#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int h=1;
        for(int i=1; i<=n; i++){
            if(i%2==0){
                h++;
            }
            else{
                h *=2;
            }
        }
        cout<<h<<endl;
    }
    return 0;
}