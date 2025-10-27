//Set Matrix Zero
//Given a matrix if an element in the matrix is 0 
//then you will have to set its entire column and row to 0 and then return the matrix.
#include<iostream>
using namespace std;
/*when you declare a 2D array as a function parameter, 
the number of columns must be specified, but the number of rows can be left unspecified. */
void markRow(int matrix[][3], int i, int cols)
{
    for(int j = 0; j<cols; j++){
        if(matrix[i][j]!=0){
            matrix[i][j] = -1;
        }
    }
}
void markCol(int matrix[][3], int j, int rows)
{
    for(int i = 0; i<rows; i++){
        if(matrix[i][j]!=0){
            matrix[i][j] = -1;
        }
    }
}
void markzero(int matrix[][3], int rows, int cols)
{
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
}
void MarkZeroes(int matrix[][3], int rows, int cols)
{
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(matrix[i][j] == 0){
                markRow(matrix, i, cols);  // Mark the row
                markCol(matrix, j, rows);  // Mark the column
            }
        }
    }
    markzero(matrix, rows, cols);
}



int main(){
    int matrix[3][3] = {{1,1,1},{1,0,1},{1,1,1}};
    // int rows = sizeof (matrix) / sizeof (matrix[0]);   
    // int cols = sizeof (matrix[0]) / sizeof(int); 
    int rows = 3;
    int cols = 3;
    MarkZeroes(matrix, rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}