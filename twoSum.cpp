#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 6, 7, 8, 2};
    int target = 9, index1, index2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                index1 = i;
                index2 = j;
            }
        }
    }
    cout << index1 << " "<< index2;
   
}