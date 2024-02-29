class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergeArray;
        mergeArray.insert(mergeArray.end(),nums1.begin(),nums1.end());
        mergeArray.insert(mergeArray.end(),nums2.begin(),nums2.end());

        int sizeArray = mergeArray.size();
        sort(mergeArray.begin(),mergeArray.end());
        if(sizeArray % 2 == 1) {
            int median = (sizeArray)/2;
            return static_cast<double>(mergeArray[median]);
        } else {
            int median1 = (sizeArray - 1) / 2;
            int median2 =  sizeArray/2;
            return (mergeArray[median1] + mergeArray[median2])/2.0;
        }
    }
};
