//Swaping two numbers using bitwise operator

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Your First Number: ";
    cin>>a;
    cout<<"Enter Your second Number: ";
    cin>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"Here is the result after swaping the value: \n";
    cout<<a<<"\n"<<b;
}