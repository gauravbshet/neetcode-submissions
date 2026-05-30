class Solution {
public:

    string encode(vector<string>& strs) {
        string res ="";
        for(string s:strs){
            res+= to_string(s.size())+"#"+s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> st;
        string op;
        int i=0;
        while(i<s.size()){
            int index=s.find("#",i);
            int num=stoi(s.substr(i,index-i));
            op=s.substr(index+1,num);
            st.push_back(op);
            i=num+index+1;
        }
        return st;
    }
};


 