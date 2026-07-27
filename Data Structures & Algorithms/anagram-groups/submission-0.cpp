class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //vector<vector<int>>hashes;
        map<vector<int>, vector<string> >hashesMap;
        for(int i=0;i<strs.size();i++){
            vector<int>hash(26,0);
            string s = strs[i];

            for(int i=0;i<s.size();i++){
                hash[s[i]-'a']++;
            }
            hashesMap[hash].push_back(s);
        }
        vector<vector<string>>ans;

        for(auto it = hashesMap.begin();it!=hashesMap.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};
