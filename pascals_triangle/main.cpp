#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> results;
        for(int i= {0}; i < numRows; i++){
            vector<int> row(i+1, 1);
            for(int j = 1; j < i; j++){
                row[j] = results[i-1][j-1] + results[i-1][j];
             }
            results.push_back(row);
        }

        for (vector<int> &a: results){
            for (int a: a){
                cout << a;
            }
        }
        return results;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    Solution solution;
    solution.generate(3);
    return 0;
}
