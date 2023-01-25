#include <iostream>
using namespace std;

int lastOcc(int arr[], int size, int key)
{
    int ans = -1, start = 0, end = size - 1, mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
        mid = (start + end) / 2;
    }

    return ans;
}

int firstOcc(int arr[], int size, int key)
{

    int ans = -1, mid, start = 0, end = size - 1;
    mid = (start + end) / 2;
    while (start <= end)
    {

        // left Occurence!!!
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int size = 12;

    //should be sorted array!!
    int arr[size] = {3, 3, 3, 3, 3, 4, 5, 8, 9, 9, 9, 9};
    int key = 9;

    cout << "First Occurence: ";
    cout << firstOcc(arr, size, key);
    cout << endl;
    cout << "Last Occurence: ";
    cout << lastOcc(arr, size, key);
    cout << endl;
    cout << "Total Ocuurence: ";
    cout << lastOcc(arr, size, key) - firstOcc(arr, size, key) + 1;


    return 0;
}