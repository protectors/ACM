class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(), n=nums2.size();
        int low=0, high=m, k=(m+n+1)/2, mid1=0, mid2=0;

        if(m>n) return findMedianSortedArrays(nums2, nums1);
        while(low<=high){
            mid1=low+(high-low)/2;
            mid2=k-mid1;

            if(mid1>0 && nums1[mid1-1]> nums2[mid2]){
                high = mid1-1;
            }else if(mid1!=m && nums1[mid1]<nums2[mid2-1]){
                low=mid1+1;
            }else{
                break;
            }
        }

        int left=0, right=0;
        if(mid1==0){
            left=nums2[mid2-1];
        }else if(mid2==0){
            left=nums1[mid1-1];
        }else{
            left=max(nums1[mid1-1], nums2[mid2-1]);
        }
         
        if((m+n)%2==1) return (double)left;

        if(mid1==m){
            right=nums2[mid2];
        }else if(mid2==n){
            right=nums1[mid1];
        }else{
            right=min(nums1[mid1], nums2[mid2]);
        }
        return (double)(left+right)/2;
    }
};