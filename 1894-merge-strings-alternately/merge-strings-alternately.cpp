class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string res = "";
        int i = 0;
        while(n1>0 && n2>0){
            res += word1[i];
            n1--;
            res += word2[i];
            n2--;
            i++;
        }
        while(n1>0){
            res += word1[i];
            i++;
            n1--;
        }
        while(n2>0){
            res += word2[i];
            i++;
            n2--;
        }
        return res;

    }
};