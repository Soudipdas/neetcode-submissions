class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {

        //for row wise check
        for(int i=0;i<b.size();i++){
            set<char>st;
            for(int j=0;j<b[0].size();j++){
                if(b[i][j]!='.'){
                    if(st.find(b[i][j])!=st.end()){
                        return false;
                    }    
                    st.insert(b[i][j]);
                }
            }
        }

        //for col wise check
        for(int i=0;i<b.size();i++){
            set<char>st;
            for(int j=0;j<b[0].size();j++){
                if(b[j][i]!='.'){
                    if(st.find(b[j][i])!=st.end()){
                        return false;
                    }
                    st.insert(b[j][i]);
                }
            }
        }

        //for 3X3 check
        for(int m = 0;m<9;m+=3){
            for(int n = 0;n<9;n+=3){
                set<char>st;
                for(int i = m;i<m+3;i++){
                    for(int j=n;j<n+3;j++){
                        if(b[i][j]!='.'){
                            if(st.find(b[i][j]) != st.end()){
                                return false;
                            }
                            st.insert(b[i][j]);
                        }
                    }
                }

            }
        }
        
        return true;
    }
};
