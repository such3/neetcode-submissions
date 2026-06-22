class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int , int> nmap;
        for(int n : nums){
            nmap[n]++;
        }
        for(auto p : nmap){
            if (p.second > (int)(nums.size()/2))
                return p.first;
        }
    }
};