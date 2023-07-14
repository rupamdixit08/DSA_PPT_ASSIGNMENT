class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {

        for(int i = 0; i < intervals.size(); i ++)
            for(int j = i + 1; j < intervals.size(); j ++)
                if(overlapped(intervals[i], intervals[j]))
                    return false;
        return true;
    }

private:
    bool overlapped(const Interval& i1, const Interval& i2){
        return max(i1.start, i2.start) < min(i1.end, i2.end);
    }
};