class Solution {
public:
    string removeDuplicates(string S) {
        string res;
        for(int i=0; i<S.length(); i++){
            if( res.empty() ) res += S[i];
            else {
                if( res[res.length()-1] == S[i] ) res.resize(res.length()-1);
                else res += S[i];
            }
        } return res;
    }
};