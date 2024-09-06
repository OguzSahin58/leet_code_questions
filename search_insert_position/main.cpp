#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = {0};
        int high = nums.size()-1;
        int mid ;
        while (low <= high){
            mid = (low + high) /2;

            if(nums[mid] == target){
                return mid;
            }else if (target > nums[mid]){
                low = mid + 1;
            }else {
                high = mid -1;
            }

        }

        return low ;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    Solution solution;
    vector<int> nums {1,3,5,6};
    int target = 7;
    cout << solution.searchInsert(nums, target) << endl;
    return 0;
}
