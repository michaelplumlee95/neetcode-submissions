class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> chars1;
        std::map<char, int> chars2;
        for (char c : s){
            chars1[c]++;
        }

        for (char c : t){
            chars2[c]++;
        }
        
        return chars1 == chars2;
    }
};
