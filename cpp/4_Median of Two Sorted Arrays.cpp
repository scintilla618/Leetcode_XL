class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        int index;
        double median;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
		sort(nums1.begin(), nums1.end());
		if(nums1.size()%2==0){
			index = nums1.size()/2;
			median = (nums1[index-1] + nums1[index])/2.0;}
		else {
			index = (nums1.size()+1)/2;
			median = nums1[index-1];}
        return median;
    }
};