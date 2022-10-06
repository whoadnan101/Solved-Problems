//Swap Kth element
void swapKth(int *arr, int n, int k) {
	    for(int i=0;i<n;i++){
	        if(i==k-1){
            swap(arr[i],arr[n-k]);
	        }
        }
	}