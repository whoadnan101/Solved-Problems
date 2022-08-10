void miniMaxSum(vector<int> arr) {
int n=arr.size();
int max=INT_MIN;
int min=INT_MAX;
long int sum=0;
for (int i=0; i<n; i++){
    sum += arr[i];
    if(arr[i]>max)
        max=arr[i];

    if(arr[i]<min)
        min=arr[i];
}
    long int min_element=sum-max;
    long int max_element=sum-min;
    cout<<min_element<<" "<<max_element;
}