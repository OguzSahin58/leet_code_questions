#include <iostream>
#include <vector>
using namespace std;
/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter =1;
        if(nums.empty()){
            return 0;
        }else{
            for(int i  = {1}; i < nums.size(); i++){
                if(nums[i]!=nums[i-1]){
                    nums[counter] = nums[i];
                    counter++;
                }
            }
        }

        return counter ;
    }
};

int main()
{
    cout << "Hello Worldd!" << endl;
    Solution solution;
    vector<int> nums = {0,0,1,1,1,2,2,3,3};
    int number = solution.removeDuplicates(nums);
    cout << number << endl;
    return 0;
}
