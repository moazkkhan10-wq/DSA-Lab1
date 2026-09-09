#include <iostream>
#include <vector>
using namespace std;
vector<int> findAllIndices(vector<int> arr, int key);
int main()
 {
    vector<int> a1 = {10, 20, 30, 20, 40, 20, 50};
    vector<int> r1 = findAllIndices(a1, 20);
    cout << "Test 1: ";
    for (int i = 0; i < r1.size(); i++) {
        cout << r1[i] << " ";
    }
    cout << endl;
    vector<int> a2 = {1, 2, 3, 4, 5};
    vector<int> r2 = findAllIndices(a2, 99);
    cout << "Test 2: ";
    for (int i = 0; i < r2.size(); i++)
     {
        cout << r2[i] << " ";
    }
    cout << endl;
    vector<int> a3 = {};
    vector<int> r3 = findAllIndices(a3, 10);
    cout << "Test 3: ";
    for (int i = 0; i < r3.size(); i++)
     {
        cout << r3[i] << " ";
    }
    cout << endl;
    return 0;
}