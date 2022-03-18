class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size()+nums2.size()==1)
        {
            if(nums1.size() == 1)
                return nums1[0];
            else
                return nums2[0];
        }
        
         list<int> half;
        int iter = (nums1.size()+nums2.size());
        int dop = 0;
        if(iter%2==0)
            dop++;
        int dist1 = 0;
        int dist2 = 0;
        int cent = iter-iter/2+dop;
        for(int i = 0; i < cent; i++)
        {
            bool already = false;
            if(dist1<nums1.size() && dist2<nums2.size())
            {
                if(nums1[dist1]<=nums2[dist2])
                {
                    if(i==cent-1 || i==cent-2)
                    half.push_back(nums1[dist1]);
                    dist1++;
                    already = true;
                }
                else
                {
                    if(i==cent-1 || i==cent-2)
                    half.push_back(nums2[dist2]);
                    dist2++;
                    already = true;
                }
            }

            if(dist1<nums1.size() && dist2>=nums2.size() && !already)
            {
                if(i==cent-1 || i==cent-2)
                half.push_back(nums1[dist1]);
                dist1++;
            }

            if(dist1>=nums1.size() && dist2<nums2.size() && !already)
            {
                if(i==cent-1 || i==cent-2)
                half.push_back(nums2[dist2]);
                dist2++;
            }
        

        }
        if(iter%2!=0)
        {
            return *next(half.begin(), 1);
        }
        else
        {
            double a = *next(half.begin(), 0);
            double b = *next(half.begin(), 1);
            return (a+b)/2;
        }
    }
};