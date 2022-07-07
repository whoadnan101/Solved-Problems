#include <iostream>
using namespace std;
int main() {
	int i,n,num[100000];
    cin>>n;
    for(int i=0; i<=n; i++){
		cin>>num[i];
	}
	if(num[n-1]%10==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}