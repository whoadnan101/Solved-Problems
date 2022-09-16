//Find first set bit
unsigned int getFirstSetBit(int n)
    {
        int count=1;
        while(n!=0){
          if(n&1){
              return count;
              break;
          }
          count++;
          n=n>>1;
        }
        return 0;
    }