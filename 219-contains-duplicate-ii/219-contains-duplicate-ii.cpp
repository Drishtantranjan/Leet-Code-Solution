class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        int i=0;
        for(int num:nums){
            if(ump.find(num)==ump.end())
                ump[num]= i;
            else{
                if(i-ump[num]<=k)
                    return true;
                ump[num]=i;
            }
            i++; 
        }
        return false;
    }
};