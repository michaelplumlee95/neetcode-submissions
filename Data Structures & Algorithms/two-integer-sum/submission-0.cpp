class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> seen;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if (seen.contains(difference)){
                result.push_back(min(seen[difference],i));
                result.push_back(max(seen[difference], i));
            } else {
                seen[nums[i]] = i;
            }
        }

return result;
    }
};
