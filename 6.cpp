class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        if(numRows == 2)
        {
            string answer;
            for(int i = 0; i<s.size(); i+=2)
            {
                answer+=s[i];
            }
            for(int i = 1; i<s.size(); i+=2)
            {
                answer+=s[i];
            }
            return answer;
        }
        string answer;
        int upline = numRows*2-2;
        for(int i = 0; i<s.size(); i +=upline)
        {
            answer += s[i];
        }
        for(int i = 1; i<upline/2; i++)
        {
            for(int k = 0; i+k*upline<s.size(); k++)
            {
                answer+=s[i+k*upline];
                if(upline-i+k*upline<s.size())
                answer+=s[upline-i+k*upline];
            }
        }
        for(int i = numRows-1; i< s.size(); i += upline)
        {
            answer +=s[i];
        }
        return answer;
    }
};