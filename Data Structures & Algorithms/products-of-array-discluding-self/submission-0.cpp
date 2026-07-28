class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        int pref[n], suff[n];

        for(int i=0;i<n;i++){
            pref[i]=1;
            suff[i]=1;
        }

        for(int i=1;i<n;i++){
            pref[i] = pref[i-1]*a[i-1];
        }

        for(int i=1;i<n;i++){
            pref[i] = pref[i-1]*a[i-1];
        }

        for(int i=n-2;i>=0;i--){
            suff[i] = suff[i+1]*a[i+1];
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(pref[i]*suff[i]);
        }
        return ans;
    }
};
