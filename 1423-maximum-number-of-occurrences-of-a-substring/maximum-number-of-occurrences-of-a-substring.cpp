class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        
        unordered_map <string , int> count;
        int max_freq = 0;
        for(int i = 0; i <= (int)s.size() - minSize; i++){
            string sub = s.substr(i , minSize);
        

        unordered_set <char> unique_characters(sub.begin(),sub.end());

        if(unique_characters.size() <= maxLetters){
            count[sub]++;
            max_freq = max(max_freq, count[sub]);
        }

       
    }
    return max_freq;
}
};