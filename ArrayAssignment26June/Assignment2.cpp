class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int size=candyType.size();
        int can_eat=size/2;
        
        set<int>s;
        for(int i=0;i<size;i++){
            s.insert(candyType[i]);
        }
        
        int set_size=s.size();
        
        if(can_eat==set_size)
            return set_size;
        
        else if(can_eat>set_size)
            return set_size;
             
        return can_eat;
    }
};