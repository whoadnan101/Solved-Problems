//Some of array element
int sumElement(int arr[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    sum=arr[i]+sum;
    return sum;
}