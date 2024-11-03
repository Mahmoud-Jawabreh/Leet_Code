class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numbers;
        bool flag = true;
        vector<bool> dup (nums.size(),false);
        for(int i = 0; i < nums.size(); i++) {
            numbers.insert(nums[i]);
        }
        if(nums.size() == numbers.size()) {
            flag = false;
        }
        else
            flag = true;
        if(flag == true) {
            cout << 1;
        }
        else
            cout << 0;
        return flag;
    }
};