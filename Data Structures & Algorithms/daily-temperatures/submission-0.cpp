class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i=0;
        vector<int> st;
        for(int i=0;i<temperatures.size();i++){
            bool found=false;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[i]<temperatures[j]){
                    int k=j-i;
                    st.push_back(k);
                    found=true;
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
