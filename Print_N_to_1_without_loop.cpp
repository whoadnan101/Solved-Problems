void printNos(int N) {
        // code here
        if(N<=0) return;
        cout<<N<<" ";
        return printNos(N-1);
    }