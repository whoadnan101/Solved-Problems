//Count even odd
void countOddEven(int arr[], int n)
    {
       int even=0,odd=0;
       for(int i=0;i<n;i++){
           if(arr[i]%2==0){
               even++;
           }
           else
               odd++;
       }
        cout<<odd<<" "<<even<<endl;
    }