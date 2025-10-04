//2. Sort in Descending Order (Medium)
//Modify Bubble Sort to sort in descending order.
//Input: nums = [3, 7, 2, 9, 1]
//Output: [9, 7, 3, 2, 1]

#include<iostream>
using namespace std;

void descBubbleSort(int arr[],int n)
{
   for (int i = 0; i < n - 1; i++) 
   {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] < arr[j + 1]) 
            {  
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 7, 2, 9, 1};
    int n = 5;

    descBubbleSort(arr, n);

    cout << "Sorted in Descending Order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
