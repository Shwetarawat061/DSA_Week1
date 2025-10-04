//6. Search in 2D Matrix (Hard) 
//Given a 2D matrix, use Linear Search to find a target element. 
//Input: matrix = [[1,3,5],[7,9,11],[13,15,17]], target = 9   
//Output: (1,1)   // row=1, col=1

#include<iostream>

using namespace std;

void searchMatrix(int matrix[][3],int rows,int cols,int target)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j]==target)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
                return;
            }
        }
    }
    cout << "Element not found" << endl;
}

int main()
{
    int matrix[3][3]={{1, 3, 5},{7, 9, 11},{13, 15, 17}};
    int target=9;

    searchMatrix(matrix,3,3,target);

    return 0;
}
