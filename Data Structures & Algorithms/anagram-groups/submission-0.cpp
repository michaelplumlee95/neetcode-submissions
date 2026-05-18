#include <array>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::map<std::array<int,26>, vector<string>> mp;
        for (const string& s : strs){
            array<int,26> chars = {0};
            for (const char c : s){
                chars[c-'a']++;
            }
            mp[chars].push_back(s);
        }
        vector<vector<string>> results;

        for (const auto& pair : mp){
            results.push_back(pair.second);
        }
        return results;


    }

};

