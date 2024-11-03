class Solution {
public:

    bool wordPattern(string pattern, string s) {
        istringstream stream(s);
        string word;
        vector<string> words;

        // Extract each word from the input string
        while (stream >> word) {
        words.push_back(word);
        }

        // If the number of words does not match the pattern length, return false
        if (words.size() != pattern.length()) {
        return false;
        }

        unordered_map<char, string> charToWordMap;
        unordered_map<string, char> wordToCharMap;

        // Iterate through the pattern and words simultaneously
        for (int i = 0; i < pattern.length(); i++) {
        char c = pattern[i];
        string w = words[i];

        // If the character has been mapped before
        if (charToWordMap.find(c) != charToWordMap.end()) {
        // Check if the current word matches the previously mapped word
        if (charToWordMap[c] != w) {
        return false;
        }
        } else {
        // If the word has already been mapped to a different character, return false
        if (wordToCharMap.find(w) != wordToCharMap.end() && wordToCharMap[w] != c) {
        return false;
        }

        // Create a new mapping
        charToWordMap[c] = w;
        wordToCharMap[w] = c;
        }
        }

        return true; // Pattern matches
    }
};