class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> anagramGroups;

        
        for (const string& str : strs) {
            string sortedStr = str; // Make a copy of the original string
            sort(sortedStr.begin(), sortedStr.end()); // Sort the copy to get the key

            // Insert the original string into the corresponding group in the map
            anagramGroups[sortedStr].push_back(str);
        }

        
        vector<vector<string>> grouped_anagrams;

        
        for (const auto& pair : anagramGroups) {
            grouped_anagrams.push_back(pair.second); 
        }

        
        return grouped_anagrams;
    }
};