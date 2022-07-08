#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	int x,y;
	getline(cin,str);
	x=count(str.begin(),str.end(),'z');
	y=count(str.begin(),str.end(),'o');
	if(2*x==y){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}