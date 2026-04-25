// SORTING
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 2, 3, 1, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    

    for (int j = 0; j < n; j++)
    {
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[j] == arr[i])
            {
                c++;
            }

        }
        if (c > n / 3)
        {
            bool alreadyPrint = false;
             for (int k = 0; k < j; k++) {
                if (arr[k] == arr[j]) {
                    alreadyPrint = true;
                    break;
                }
            }
            if(!alreadyPrint) {
                cout << arr[j] << " ";
            }
        }
    }

    return 0;
}