#include <iostream>
using namespace std;

int main(){

    int row,col;
    cin>>row>>col;

    int a[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>a[i][j];
        }
    }

    int row_start = 0, row_end = row - 1, column_start = 0, column_end = col - 1;

    while(row_start <= row_end && column_start <= column_end){
    for(int i = column_start; i <= column_end; i++){
        cout<<a[row_start][i]<<" ";
    }
    row_start++;
    
    for(int i = row_start; i <= row_end; i++){
        cout<<a[i][column_end]<<" ";
    }
    column_end--;
    
    for(int i = column_end; i >= column_start; i--){
        cout<<a[row_end][i]<<" ";
    }
    row_end--;
    
    for(int i = row_end; i >= row_start; i--){
        cout<<a[i][column_start]<<" ";
    }
    column_start++;
    }
    return 0;
}
