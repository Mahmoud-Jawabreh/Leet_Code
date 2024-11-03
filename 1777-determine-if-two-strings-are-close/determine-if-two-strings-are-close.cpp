class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // check if the strings are not equal in size
        if (word1.length() != word2.length()) {
            cout << "not equal in size" << endl;
            return false;
        }

        set<char> woord1, woord2;
        for (int i = 0; i < word1.length(); i++) {
            woord1.insert(word1[i]);
        }

        for (int i = 0; i < word2.length(); i++) {
            woord2.insert(word2[i]);
        }

        // to check if they have the same characters
        if (woord1 != woord2) {
            cout << "not the same characters" << endl;
            return false;
        }

        // check if the occurrences match
        unordered_map<char, int> word1Freq, word2Freq;
        for (int i = 0; i < word1.length(); i++) {
            word1Freq[word1[i]]++;
        }
        for (int i = 0; i < word2.length(); i++) {
            word2Freq[word2[i]]++;
        }

        // Get the frequency values and sort them
        vector<int> freq1, freq2;
        for (auto it : word1Freq) {
            freq1.push_back(it.second);
        }
        for (auto it : word2Freq) {
            freq2.push_back(it.second);
        }

        // Sort the frequency vectors
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        // Check if the frequency vectors are the same
        if (freq1 != freq2) {
            cout << "frequency is different" << endl;
            return false;
        }

        return true; // Strings are "close"
    }
};