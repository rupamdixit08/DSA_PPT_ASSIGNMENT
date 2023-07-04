// Recursive Solution
class Solution {
    bool ex(int ind, int openingBracket, string &s){
        if(ind==s.size()) return (openingBracket==0);

        bool ans=false;
        if(s[ind]=='*'){
            ans|=ex(ind+1,openingBracket+1,s); // Add '('
            if(openingBracket) ans|=ex(ind+1,openingBracket-1,s); // Add ')'
            ans|=ex(ind+1,openingBracket,s); //Add Nothing
        }else{
            if(s[ind]=='('){
                ans=ex(ind+1,openingBracket+1,s);
            }else{
                if(openingBracket) ans=ex(ind+1,openingBracket-1,s);
            }
        }

        return ans;
    }

public:
    bool checkValidString(string s) {
        return ex(0,0,s);
    }
};