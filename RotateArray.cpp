//Rotate an array
void rotateArr(int arr[], int k, int n){
        k=k%n;
        reverse(arr,arr+k);
        reverse(arr+k,arr+n);
        reverse(arr,arr+n);
    }