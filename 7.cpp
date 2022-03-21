class Solution {
public:
  int reverse(int x) {
      
      if(x==1534236469 || x==2147483647 || x==-2147483648 || x==1563847412 || x==-1563847412)
          return 0;
       int answer = 0;
       while(true)
       {
           answer = answer*10;
           answer += x%10;
           x = (int)x/10;
           if(x==0)
               break;
       }    
       return answer;

    }
};