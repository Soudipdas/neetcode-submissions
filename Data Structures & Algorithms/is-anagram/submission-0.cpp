class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_hash[26]={0};
        int t_hash[26]={0};

        for(int i=0;i<s.size();i++){
            s_hash[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            t_hash[t[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(s_hash[i]!=t_hash[i]){
                return false;
            }
        }
        return true;
    }
};
