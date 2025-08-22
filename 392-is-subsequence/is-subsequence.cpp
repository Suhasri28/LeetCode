class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() > t.length()){
            return false;
        }
        /*int l = 0, h = 0, k = 0;
        while(h != t.length() && k != s.length()) {
            if(t[h] == s[k]){
                l = h;
                k++;
            }
            h++;
        }*/
        int h = 0, k = 0;
        while(h != t.length() && k != s.length()) {
            if(t[h] == s[k]){
                k++;
            }
            h++;
        }
        return (k == s.length());
    }

};