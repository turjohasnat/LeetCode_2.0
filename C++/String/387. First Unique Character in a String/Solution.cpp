//C++ Solution:

//Runtime: 33 ms
//Memory Usage: 14.92 MB

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;
        for(char i : s)
            m[i]++;

        for(int i = 0; i < s.size(); i++){
            if(m[s[i]] == 1)
                return i;
        }

        return -1;
    }
};
