class Solution {
public:
    
    string solve(const string &s, int &i)
    {
        string z;
        
        while(i<s.size() && s[i]!=']')
        {
			// This loop will continue till we get ']'
            if(isdigit(s[i]))
            {
                int k=0;
                
                while(i<s.size() && isdigit(s[i]))
                {
                    k=k*10 +(s[i++]-'0'); // For numbers like 12,100,1212....
                }
                
                i++; // For '['
                
                string t=solve(s,i); // string got from recursion
                
                i++; // For ']'
                
                while(k--)
                {
                    z+=t; // Adding string got from recursion k*(string)...
                }      
            }
            else
                z+=s[i++]; // Adding string which are before digits.
        }
        return z;
    }
    
    string decodeString(string s) 
    {
        int i=0;
        return solve(s,i);
    }
};