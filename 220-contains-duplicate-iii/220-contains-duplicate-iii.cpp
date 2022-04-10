class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        map<int, int> window;
        for(int i = 0; i < min(k+1, (int)nums.size()); i++){ //add first k elements to the window (map), and check whether immediately adjacent elements (ordered in map) are within range. Return true if so.
            window[nums[i]]++;
            auto it = window.find(nums[i]);
            if(it->second > 1) return true;
            if(it != window.begin()){
                auto it_prev = prev(it, 1);
                long long diff = llabs((long long)it->first - (long long)it_prev->first);
                if(diff <= t) return true;
            }
                auto it_next = it;
                advance(it_next, 1);
                long long diff = llabs((long long)it->first - (long long)it_next->first);
                if(it_next != window.end() && diff <= t) return true;
        }
        if(k > nums.size()) return false; //if all values have been added to the window and no qualifying pairs found, can return false
        
        for(int i = 1; i+k < nums.size(); i++){ //shift window to the right gradually - remove leftmost value from window, add new rightmost value. Check whether adjacent values in window are within range and return true if so.
            window[nums[i-1]]--;
            if(window[nums[i-1]] <= 0) window.erase(nums[i-1]);
            window[nums[i+k]]++;
            auto it = window.find(nums[i+k]);
            if(it->second > 1) return true;
            if(it != window.begin()){
                auto it_prev = prev(it, 1);
                long long diff = llabs((long long)it->first - (long long)it_prev->first);
                if(diff <= t) return true;
            }
            auto it_next = it;
            advance(it_next, 1);
            long long diff = llabs((long long)it->first - (long long)it_next->first);
            if(it_next != window.end() && diff <= t) return true;
        }
        
        return false; //return false if no matches found
    }
};