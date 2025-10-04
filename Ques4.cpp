// 4. First Occurrence (Easy)
// Find index of target using Linear Search. Return -1 if not found.
// Input: nums = [4,2,7,1,9], target = 7
// Output: 2

#include <iostream>

using namespace std;

int main() {
    int arr[]={4,2,7,1,9};
    int n=5;
    int key=7;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
