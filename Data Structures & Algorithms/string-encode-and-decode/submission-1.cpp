class Solution {
public:

    string encode(vector<string>& strs) {
        string s_ans;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            int sz = s.size();
            string sz_to_str = to_string(sz);
            string temp = '*'+sz_to_str+'#'+s;
            s_ans+=temp;
        }
        return s_ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                int sz = 0;
                string sz_str = "";
                i++;
                while(s[i]!='#'){
                    sz_str+=s[i];
                    i++;
                }
                
                std::stringstream ss(sz_str);
                ss >> sz; 
                string tmp="";
                for(int j = i+1; j<=i+sz;j++){
                    tmp+=s[j];
                }
                ans.push_back(tmp);
                i+=sz;
            }
        }
        return ans;
    }
};
