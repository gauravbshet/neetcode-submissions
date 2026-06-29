class Solution {
public:

    string encode(vector<string>& strs) {
        string op="";
        for(auto x:strs){
            op+=to_string(x.size())+"#"+x;
        }
        return op;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            int index=s.find("#",i);
            int num=stoi(s.substr(i,index-i));
            string p=s.substr(index+1,num);
            ans.push_back(p);
            i=index+num+1;
        }
        return ans;
    }
};
