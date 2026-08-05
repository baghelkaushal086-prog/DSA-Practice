class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string filtered = "";
        
        for (char c : s) {
            if (std::isalnum(c)) {
                filtered += std::tolower(c);
            }
        }
        
        std::string reversed = filtered;
        std::reverse(reversed.begin(), reversed.end());
        
        return filtered == reversed;
    }
};
