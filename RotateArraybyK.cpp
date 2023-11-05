//ROTATE ARRAY BY K
//WHERE K IS THE GIVEN INDEX
void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
        }