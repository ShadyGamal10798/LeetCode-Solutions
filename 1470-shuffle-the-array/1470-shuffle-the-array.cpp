class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        vector<int> ans;
        for(int i=0 ; i<arr.size()/2 ; i++){
            ans.push_back(arr[i]);
            ans.push_back(arr[i+n]);
        }
        
        return ans;
    }
};