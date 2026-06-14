class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(auto x:strs){
            res+=to_string(x.size())+"#"+x;
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            int index=s.find("#",i);
            int num= stoi(s.substr(i,index-i));
            string op= s.substr(index+1,num);
            ans.push_back(op);
            i=index+num+1;
        }
        return ans;
    }
};
