class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            while(nums[i]>0){
                
                sum=sum+nums[i]%10;
                nums[i]=nums[i]/10;
            }
            nums[i]=sum;
        }
        sort(nums.begin(),nums.end());
        return (nums[0]);
    }
};
