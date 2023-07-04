class Solution {
public:
    //Time: O(2^n), Space: O(n)
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();
        
        //get the lcs length
        int lcs = helper(word1, word2, m, n);
        
        int steps = (m-lcs) + (n-lcs);
        return steps;
    }
    
    int helper(string& word1, string& word2, int m, int n){
        if(m == 0 || n == 0) return 0;
        
        if(word1[m-1] == word2[n-1])
            return 1 + helper(word1, word2, m-1, n-1);
        else
            return max(helper(word1, word2, m-1, n), helper(word1, word2, m, n-1));
    }
};