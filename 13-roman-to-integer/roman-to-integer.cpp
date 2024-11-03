        class Solution {
        public:
            int romanToInt(string s) {
                unordered_map<char, int> key;

                key['I'] = 1;
                key['V'] = 5;
                key['X'] = 10;
                key['L'] = 50;
                key['C'] = 100;
                key['D'] = 500;
                key['M'] = 1000;

                int sum = 0;

                for(int i = 0; i < s.length(); i++){
                    if(key[s[i]] < key[s[i+1]]){
                        sum -= key[s[i]];
                    }
                    else{
                        sum += key[s[i]];
                    }
                }
                cout << sum;
                return sum;
            }
        };