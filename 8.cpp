class Solution {
public:
   int myAtoi(string s) {
        long int answer = 0;
        int space = 0;
        while(s[space]==' ')
            space++;
        int mnoj = 1;
        for(; space < s.size(); space++)
        {
            switch (s[space])
            {
                case '0':
                    answer*=10;
                    break;
                case '1':
                    answer*=10;
                    answer += 1;
                    break;
                case '2':
                    answer*=10;
                    answer += 2;
                    break;
                case '3':
                    answer*=10;
                    answer +=3;
                    break;
                case '4':
                    answer*=10;
                    answer +=4;
                    break;
                case '5':
                    answer*=10;
                    answer +=5;
                    break;
                case '6':
                    answer*=10;
                    answer +=6;
                    break;
                case '7':
                    answer*=10;
                    answer +=7;
                    break;
                case '8':
                    answer*=10;
                    answer +=8;
                    break;
                case '9':
                    answer*=10;
                    answer +=9;
                    break;
                case '-':
                    if(space-1>=0)
                        if(s[space-1]!=' ')
                            return answer*mnoj;
                    if(mnoj==1)
                        mnoj = -1;
                    break;
                case '+':
                    if(space-1>=0)
                        if(s[space-1]!=' ')
                            return answer*mnoj;
                    break;
                default:
                    return answer*mnoj;
            }

        if(answer*mnoj>2147483647)
                return 2147483647;
        if(answer*mnoj<-2147483648)
                return -2147483648;
        }
        return answer*mnoj;
    }
};