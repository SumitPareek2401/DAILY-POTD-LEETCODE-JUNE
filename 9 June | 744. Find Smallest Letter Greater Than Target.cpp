class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        sort(letters.begin(), letters.end());

        int temp = target -48;
        int ans = letters[0] - 48;

        for(int i = 0; i < letters.size(); i++){
            if(letters[i] - 48 > temp){
                ans = letters[i] - 48;
                break;
            }
        }
        return ans+48;
    }
};
