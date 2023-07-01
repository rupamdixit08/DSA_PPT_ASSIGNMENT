class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int top=0,vally=0, plan=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1])
                top++;
            if(arr[i-1] > arr[i] && arr[i] < arr[i+1])
                vally++;
            if(arr[i-1] == arr[i] || arr[i] == arr[i+1])
                plan++;
        }
        if(top == 1 && plan == 0 && vally == 0)
            return true;
        return false;
    