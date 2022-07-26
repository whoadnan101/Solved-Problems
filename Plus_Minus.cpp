#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
    int N,a,result;
    float p=0.,n=0.,z=0.;
    cin>>N;
    result=N;
    while(N--){
        cin>>a;
        if(a>0){
            p++;
        }
        else if (a<0){
            n++;
        }
        else{
            z++;
        }
    }
    cout<<p/result<<endl;
    cout<<n/result<<endl;
    cout<<z/result<<endl;
        result=0;
}
