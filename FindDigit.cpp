//Find Digits

int findDigits(int n) {
    int count=0,temp=n,rem;
    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        if(rem==0){
            continue;
        }
        else if(n%rem==0){
            count++;
        }
    }
    return count;
}