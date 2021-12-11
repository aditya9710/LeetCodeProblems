class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {        
        int mid, left = 0, right = arr.size() - 1;
        int pos = 0;
        while (left < right) {
            mid = left + (right - left)/2;
            // cout<<"left: "<<left;
            // cout<<"\tmid: "<<mid;
            // cout<<"\tright: "<<right<<endl;
            if (arr[mid] < arr[mid+1])
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};
