// Your code here
        if(n%2==0){
            for(int i=1;i<n;i+=2){
                swap(arr[i],arr[i-1]);
            }
        }
         else{
                for(int i=1;i<n-1;i+=2){
                    swap(arr[i],arr[i-1]);
                }
            }   
        
    }