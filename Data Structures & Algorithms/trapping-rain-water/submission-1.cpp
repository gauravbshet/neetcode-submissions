class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int water=0;
        for(int i=1;i<n-1;i++){
            int lmax=height[i];
            int rmax=height[i];

            for(int j=0;j<i;j++){
                lmax=max(lmax,height[j]);
            }

            for(int j=i+1;j<n;j++){
                rmax=max(rmax,height[j]);
            }

            water+=min(lmax,rmax)- height[i];
        }
        return water;
    }
};
