class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int l=nums.size();
        int sum=0;
        for(int i=0;i<l;i++){
            if(i%2==0){
                sum+=nums[i];
            }
            else{
                sum-=nums[i];
            }
        }
        return sum;
    }
};
