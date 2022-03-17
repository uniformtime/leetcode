class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         list<int> half;
        int iter = (nums1.size()+nums2.size());
        int dop = 0;
        if(iter%2==0)
            dop++;
        int dist1 = 0;
        int dist2 = 0;
        for(int i = 0; i < iter-iter/2+dop; i++)
        {
            bool already = false;
            if(dist1<nums1.size() && dist2<nums2.size())
            {
                if(nums1[dist1]<=nums2[dist2])
                {
                    half.push_back(nums1[dist1]);
                    dist1++;
                    already = true;
                }
                else
                {
                    half.push_back(nums2[dist2]);
                    dist2++;
                    already = true;
                }
            }

            if(dist1<nums1.size() && dist2>=nums2.size() && !already)
            {
                half.push_back(nums1[dist1]);
                dist1++;
            }

            if(dist1>=nums1.size() && dist2<nums2.size() && !already)
            {
                half.push_back(nums2[dist2]);
                dist2++;
            }


        }
        if(iter%2!=0)
        {
            return *next(half.begin(), iter-iter/2-1);
        }
        else
        {
            double a = *next(half.begin(), iter-iter/2);
            double b = *next(half.begin(), iter-iter/2-1);
            return (a+b)/2;
        }
    }
};