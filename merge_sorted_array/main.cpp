#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index_right = m+n-1 ;
        int index_m = m-1;
        int index_n = n-1;

        while(index_n >= 0){
            if(index_m >= 0 && nums1[index_m] > nums2[index_n]){
                nums1[index_right] = nums1[index_m];
                index_m--;
            }else{
                nums1[index_right] = nums2[index_n];
                index_n--;
            }
            index_right--;
        }
        for(int item: nums1){
            cout << item;
        }
    }
};

int main()
{
    cout << "Hello World!" << endl;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    Solution solution;
    solution.merge(nums1, m, nums2,n);

    return 0;
}
