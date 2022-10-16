// Given a 2D array of size M*N, we need to print the sinosoidal wave in the 2D Array

#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    // For every jth column, we will print the row either top-to-bottom fashion or bottom-to-top fashion depending on the condition
    int j=0;
    while(j<mCols)   
    {
        if(j%2==0)   // If the jth column is even we will print from top-to-bottom
        {
           for(int i=0;i<nRows;i++)
           {
               cout<<input[i][j]<<" ";
           }
        }
        else   // Otherwise if jth column is odd we will print from bottom-to-top
        {
            for(int i=nRows-1;i>=0;i--)
            {
                cout<<input[i][j]<<" ";
            }
        }
        j++;
    }
}

int main()
{
	int t;
    cout<<"Enter the number of test cases to run : ";
	cin >> t;
	while (t--)
	{
		int row, col;
        cout<<"Enter the size of the row and column : ";
		cin >> row >> col;
		int **input = new int *[row];
        cout<<"Enter the elements corresponding to the row and column : ";
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}