class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        vector<bool> greatest (candies.size(),false);
        for (int i = 0; i < candies.size(); i++) {
            if(maxCandies < candies[i]) {
                maxCandies = candies[i];
            }
        }
        for(int i = 0;i < candies.size(); i++) {
            if((candies[i] + extraCandies) >= maxCandies ) {
                greatest[i] = true;
            }
        }
        return greatest;
    }
};