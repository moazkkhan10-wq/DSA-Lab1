#include <vector>
using namespace std;
int findMode(vector<int> arr)
 {
    if (arr.empty()) 
    {
        return -1;
    }
    int mode = arr[0];
    int maxCount = 0;
    for (int i = 0; i < arr.size(); i++)
     {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
         {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

      if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}