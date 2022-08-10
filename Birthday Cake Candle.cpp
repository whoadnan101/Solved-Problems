int birthdayCakeCandles(vector<int> candles) {
int max=candles[0];
int n=candles.size();
int count=0;
for(int i=0; i<n; i++){
    if(candles[i]>max){
        max = candles[i];
        count = 1;
    }
    else if (candles[i]==max){
        count+=1;
    }   
}
return count;
}