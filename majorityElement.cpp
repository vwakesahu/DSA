#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int latestCount = 0, count = 0;
    for (int i = 0; i < sizeof(arr); i++)
    {
        for (int j = 0; j < sizeof(arr); j++)
        {
            if(arr[i] == arr[0]) count++;
        }
        if(count> latestCount){
            latestCount = count;
        }
        
    }
}

// 1,2,3,4,5,6