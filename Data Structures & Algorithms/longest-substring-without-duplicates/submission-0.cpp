class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> dupeSet;
        int result = 0;
        int leftIndex = 0;
        for (int rightIndex = 0; rightIndex < s.size(); rightIndex++) {
            while (dupeSet.count(s[rightIndex])) {
                dupeSet.erase(s[leftIndex]);
                leftIndex++;
            };

            dupeSet.insert(s[rightIndex]);
            result = max(result, (rightIndex - leftIndex + 1));
        }
        return result;
    }
};
