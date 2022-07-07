#include <iostream>
using namespace std;
int main() {
	int n,num[];
    cin>>n>>endl;
    for(int i=0; i<=n; i++){
		cin>>num[i]>>" ";
	}
	if(num%2==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}