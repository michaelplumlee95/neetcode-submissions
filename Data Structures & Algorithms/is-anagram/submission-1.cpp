class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::map<char, int> charMap;

        for (int i = 0; i < s.length(); i++){
            charMap[s[i]]++;
            charMap[t[i]]--;
        }

        for (const auto& [key,val] : charMap){
            if (val != 0) return false;
        }
        return true;
    }
};
