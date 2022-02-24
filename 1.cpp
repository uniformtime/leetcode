#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        
        int z = 1;
        for (int i = 0; i < nums.size(); i++)
        {
           
           for(int k = z; k < nums.size(); k++)
           {
               if(target-nums[i]==nums[k])
               {
                   vector<int> answer = {i, k};
                   return answer;
               }
            }
            z++;
        }
                                                                    
        vector<int> nullanswer = {0,0};                                                            
        return nullanswer;                                                            
    }
                                                                    
};