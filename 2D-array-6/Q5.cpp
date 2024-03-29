class Solution {
public:
    int minProductSum(vector<int>& A, vector<int>& B) {
        sort(begin(A), end(A));
        sort(begin(B), end(B), greater<>());
        int ans = 0;
        for (int i = 0; i < A.size(); ++i) ans += A[i] * B[i];
        return ans;
    }
};
