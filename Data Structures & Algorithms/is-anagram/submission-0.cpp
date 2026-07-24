class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        map<char,int> ss,tt;
        for (int i=0;i <= (int)s.length() - 1;i++)ss[s[i]]++;
        for (int i=0;i <= (int)t.length() - 1;i++)tt[t[i]]++;
        return ss==tt;
            }
};
