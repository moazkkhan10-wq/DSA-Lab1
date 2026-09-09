#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generatePascal(int n);
void printTriangle(vector<vector<int>> triangle)
 {
    if (triangle.empty()) 
    {
        cout << "Empty\n";
        return;
    }
    for (int i = 0; i < triangle.size(); i++) 
    {
        for (int j = 0; j < triangle[i].size(); j++)
         {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
 {
    // Test Case 1: n = 0
    cout << "Test n = 0:\n";
    printTriangle(generatePascal(0));
    cout << endl;
    // Test Case 2: n = 1
    cout << "Test n = 1:\n";
    printTriangle(generatePascal(1));
    cout << endl;
    // Test Case 3: n = 5
    cout << "Test n = 5:\n";
    printTriangle(generatePascal(5));
    return 0;
}