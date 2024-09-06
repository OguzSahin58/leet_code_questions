#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last_index = digits.size() - 1;
        if(digits[last_index] + 1 < 10){
            digits[last_index]+=1;
            return digits;
        }
        else{
            while(last_index>=0 && digits[last_index] + 1 >= 10){
                digits[last_index] = 0;
                last_index--;
            }
            if(last_index<0){
                digits.insert(digits.begin(),1);
            }
            else{
                digits[last_index] += 1;
            }
            return digits;
        }
    }
};
int main()
{
    cout << "Hello World!" << endl;
    Solution solution;
    vector<int> digits = {8,9,9,9};
    for(int a: digits){
        cout << a ;
    }
    cout << endl;
    vector<int> final = solution.plusOne(digits);
    for(int a: final){
        cout << a ;
    }
    return 0;
}
