class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Create a hashmap of nums and their frequencies
        unordered_map<int,int> myMap;
        for (int num : nums) {
            myMap[num]++;
        }

        // Create n+1 buckets
        int highest_bucket = nums.size() + 1;
        vector<vector<int>> buckets(highest_bucket);

        // Place the nums in their buckets according to their freq
        for(const auto& [key, freq] : myMap){
            buckets[freq].push_back(key);
        }

        // Go to the highest bucket, and print nums until we have k results
        vector<int> result;

        for (int i = highest_bucket - 1; i >= 0 && result.size() < k; i--){
            for (int num : buckets[i]){
                result.push_back(num);
                if (result.size() == k) break;
            }
        }

        return result;

    }
};
