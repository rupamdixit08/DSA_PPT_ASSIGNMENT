

//This is a two pointer approach where one pointer marks the beginning and the othere is the minimum between the length and the kth position from start( start refers to the 2*k starting string ). For more clarity see the code.
//TC = O(n)
//SC = O(n)
//Auxiliary space = O(1)

class Solution {
public:
    string reverseStr(string s, int k) {
        
        int l=0;
        int r = min(k,(int)s.length());
        while( l < s.length() ){
            
            reverse(s.begin()+l,s.begin()+r);
            l+=2*k;
            r=min(k+l,(int)s.size());
        }
        return s;
    }
};