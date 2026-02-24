//C++ Solution:

//Runtime: 3 ms
//Memory Usage: 9.60 MB

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t)
            return true;
        else
            return false;
    }
};
