class Solution {
public:
   string mymax(string s1, string s2)
{
    if(s1.size()>s2.size())
        return s1;
    else
        return s2;

}

bool truePalindrom(string &s, int begin, int end)
{
    int path = 0;
    int counter = end-begin;

    while(s[begin]==s[end] && begin<end)
    {
        begin++;
        end--;
        path++;
    }
    if(counter%2 != 0)
    {
        counter++;
    }

        if(counter==path*2)
            return true;
        else
            return false;

}


string longestPalindrome(string s)
{
    int s_size = s.size();

    string preanswer;
       string answer = "";
       answer +=s[0];
    for(int i = 0; i<s_size; i++)
    {
        for(int k = s_size-1; k>i; k--)
        {
            if(s[i]==s[k])
            {
                if(truePalindrom(s, i, k))
                {

                    for(int z = i; z <= k; z++)
                    {
                        preanswer += s[z];
                    }
                    answer = mymax(answer, preanswer);
                    preanswer = "";
                    if(i == 0 && k == s_size-2)
                    {
                        return answer;
                    }
                    if(s_size>40)
                    {
                      i = i + (k-i)/2+1;
                        k = s_size;
                    }


                }

            }
        }
    }
    return answer;
}
};