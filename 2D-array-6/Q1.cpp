class Solution {
public:
    vector<int> diStringMatch(string s) {
         int n = s.size();
        int i = 0;
        int j = n;

        vector<int>ans;

        for(int k = 0; k<=n; k++){
            if(s[k]=='I'){
                ans.push_back(i);
                i++;
            }else{
                ans.push_back(j);
                j--;
            }
        }

        if(i == j){
            ans.push_back(i);
        }
return ans;

        
    }
};