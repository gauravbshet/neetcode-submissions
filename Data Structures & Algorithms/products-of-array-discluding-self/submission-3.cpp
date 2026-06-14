class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int l=1;
        int r=1;

        for(int i=0;i<n;i++){
            ans[i]=l;
            l*=nums[i];
        }

        for(int j=n-1;j>=0;j--){
            ans[j]*=r;
            r*=nums[j];
        }
        return ans;
    }
};
