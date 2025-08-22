class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        /*for(int i = 0, j = 0;( i < word1.length() || j < word2.length()) ; i++, j++) {
                if(i > word1.length()-1) {
                    s+=word2[j];
                }
                else if(j > word2.length() - 1) {
                    s+= word1[i];
                }
                else{
                    s += word1[i];
                    s += word2[j];
                }
        }*/
        int n = word1.size();
        int m = word2.size();
        for(int i = 0;( i < n && i < m); i++)
        {
            s = s + word1[i] + word2[i];
        }

        if(n > m) {
            s += word1.substr(m);
        }
        else if(m > n) {
            s += word2.substr(n);
        }
        return s;
    }
};