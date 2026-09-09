#include <iostream>
#include <vector>
using namespace std;
int findMode(vector<int> arr);
int main()
 {
    // Case 1: Array with unique mode
    vector<int> arr1 = {1, 3, 3, 3, 2, 1};
    cout << "Unique mode test (3 expected): " << findMode(arr1) << endl;
    //Case 2: Array with multiple modes (returns first found mode)
    vector<int> arr2 = {1, 1, 2, 2, 3};
    cout << "Multiple modes test (1 expected): " << findMode(arr2) << endl;
    //Case 3: Empty array
    vector<int> arr3 = {};
    cout << "Empty array test (-1 expected): " << findMode(arr3) << endl;
    return 0;
}