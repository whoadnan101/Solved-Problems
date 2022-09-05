//funtion to find largest element in an array
#include<bits/stdc++.h>
using namespace std;
int getLargest(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++)
        if(arr[i]>arr[res])
            res=i;
        return res;
}
int main()
{
      int arr[]={23,4,100,5,78};
      cout<<getLargest(arr,5);
      return 0;
}