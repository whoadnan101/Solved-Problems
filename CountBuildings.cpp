int countBuildings(vector<int> &height) {
        // code here
        int count = 0;
        int max_height = INT32_MIN;
        for(auto h : height){
            if(h>max_height){
                count++;
                max_height = h;
            }
        }
        return count;
    }