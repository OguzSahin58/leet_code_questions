#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int  j = {0};
        for(int i = {0}; i< nums.size(); i++){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
        }
        for(int a: nums){
            cout << a ;
        }
        return j;
    }
};


int main()
{
    cout << "Hello World!" << endl;
    Solution solution;
    vector<int> nums {0,1,2,2,3,0,4,2};
    int val = 2;
    solution.removeElement(nums, val);

    return 0;
}
