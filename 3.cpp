class Solution {
public:
int lengthOfLongestSubstring(string s) {
    string dictionary = "";
    int answer = 0;
    int count = 0;
    
    for(int i = 0; i < s.size(); i++)
    {

        if(dictionary.find(s[i], 0) == std::string::npos)
        {
            dictionary.push_back(s[i]);
            count++;
            answer = max(answer, count);
        }
        else
        {
            dictionary.push_back(s[i]);
            int point = dictionary.find(s[i]);
            dictionary.erase(0, point+1);
            count = count - point;
        }
    }
    return answer;
}
};