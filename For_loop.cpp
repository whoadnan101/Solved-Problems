#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string str[]={"one","two","three","four","five","six","seven","eight","nine"};
    int n,m;
    cin>>n>>m;
    for(int i=n; i<=m; i++){
        if(i>9){
           cout<<(i%2?"odd\n":"even\n"); 
        }
        else{
            cout<<str[i-1]<<endl;
        }
    }
}
