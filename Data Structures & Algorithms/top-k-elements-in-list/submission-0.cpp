class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frq;
        for(int num:nums){
            frq[num]++;
        }
        vector<pair<int,int>> v;
        for(auto it: frq){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        while(k>0){
            ans.push_back(v.back().second);
            v.pop_back();
            k--;
        }
        return ans;

    }
};
