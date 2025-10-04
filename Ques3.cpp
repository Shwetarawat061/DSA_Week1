//3. K-th Largest Element (Hard) 
//Using Bubble Sort, find the K-th largest element in the array. 
//Input: nums = [3,2,1,5,6,4], k = 2   
//Output: 5  

#include<iostream>

using namespace std;

int main()
{
    int arr[]={3,2,1,5,6,4};
    int n=6;
    int k=2;
    
    for(int i=1;i<k;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    cout<<arr[k];
    
    return 0;
}
