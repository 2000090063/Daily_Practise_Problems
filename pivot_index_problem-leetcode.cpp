class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        int s1=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++)
        {    s1-=nums[i];
            if(s==(s1))
                return i;
            else
                s+=nums[i];
        }
        return -1;
    }
};