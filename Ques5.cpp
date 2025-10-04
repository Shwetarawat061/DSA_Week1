// 5. Find Last Occurrence (Medium)
// Find the last occurrence of target using Linear Search.
// Input: nums = [2, 4, 4, 4, 9], target = 4
// Output: 3

#include<iostream>

using namespace std;

int findLastOccurrence(int arr[],int n,int k)
{
    int lastIndex=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            lastIndex=i;
        }
    }
    return lastIndex;
}
int main()
{
    int arr[]={2,4,4,4,9};
    int n=5;
    int target=4;
    int result=findLastOccurrence(arr,n,target);
    cout<<result<<endl;
    return 0;
}
