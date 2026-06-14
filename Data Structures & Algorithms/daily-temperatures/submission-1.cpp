class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> st;
        int n=temperatures.size();
        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=i+1;j<n;j++){
                if(temperatures[i]<temperatures[j]){
                    int k=j-i;
                    found=true;
                    st.push_back(k);
                    break;
                }
            }
            if(!found){
                    st.push_back(0);
                }
            
        }
        return st;
    }
};
