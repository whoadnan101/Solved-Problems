//INSERTION SORT

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    int i,key,j;
    for(i=0;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}