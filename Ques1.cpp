//Bubble Sort (3 Problems) 
//1. Sort an Array (Easy) 
//Sort the array using Bubble Sort in ascending order. 
//Input: nums = [5, 2, 9, 1, 5, 6]   
//Output: [1, 2, 5, 5, 6, 9]

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = 6;

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
