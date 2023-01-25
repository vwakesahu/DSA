#include<iostream>
using namespace std;

int main()
{
    int arr[10], size, temp;

    cout << "Enter Size: ";
    cin >> size;

    
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }



    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

    cout << "Array is:";

    for (int i = 0; i < size; i++)
    {
        cout <<" ";
        cout << arr[i];
    }
    
    
    
    return 0;
}
