class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>h;
        
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    h.push_back(nums1[i]);
                    break;
                }
            }
        }
        sort(h.begin(),h.end());
        h.erase(unique(h.begin(),h.end()),h.end());
    return h;}
};
