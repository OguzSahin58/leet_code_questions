#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        std::string myNum = std::to_string(x);
        for(int i= {0};i < myNum.size() /2; i++ ){
            if (myNum[i]!= myNum[myNum.size()-i-1]){
                return false;
            }
            return true;
        }
    }
};

int main()
{
    cout << "Hello World!" << endl;
    Solution solution;

    cout<< solution.isPalindrome(10);


    return 0;
}
