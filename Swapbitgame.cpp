//Problem of the day | GEEKSFORGEEKS
int swapBitGame(long long N){
        int count=0;
        while(N!=0){
          if(N&1)
              count++;
              N=N>>1;
          }
          if(count&1)
          return 1;
        return 2;
    }
};