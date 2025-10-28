class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        while (i >= 0 && i < (int)s.size() - 1) {
            if (s[i] == s[i + 1]) {
                s.erase(i, 2);
                if (i > 0) i--;
                else i = 0;   // handle when first two chars are erased
            } else {
                i++;
            }
        }
        return s;
    }
};
