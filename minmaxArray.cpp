//Find minimum and maximum element in an array
pair<long long, long long> getMinMax(long long arr[], int n) {
    long max=arr[0];
    long min=arr[0];
    long i;
    for(i=0;i<n;i++){
    if(arr[i]>max){
    max=arr[i];
    }
    if(arr[i]<min){
    min=arr[i];
    }
    }
    return {min,max};
}