class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> one;
        map<char,int> two;
        for(char ch : s){
            one[ch]++;
        }
        for(char ch : t){
            two[ch]++;
        }
        if(one == two)
            return true;
        else
            return false;
    }
};
