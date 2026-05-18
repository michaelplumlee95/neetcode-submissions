class Solution {
   public:
    bool isPalindrome(string s) {
        int leftIndex = 0;
        int rightIndex = s.size() - 1;

        while (leftIndex < rightIndex) {
            while (leftIndex < rightIndex && !isalnum(s[leftIndex])) leftIndex++;
            while (leftIndex < rightIndex && !isalnum(s[rightIndex])) rightIndex--;
            char left = tolower(s[leftIndex]);
            char right = tolower(s[rightIndex]);
            if (left != right) return false;
            leftIndex++;
            rightIndex--;
        }
        return true;
    }
};
