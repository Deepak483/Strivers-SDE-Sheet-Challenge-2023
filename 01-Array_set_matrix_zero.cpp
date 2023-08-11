#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	// int row[n] = {0},col[m] = {0};
	//for row matrix[i][0] for colum matrix[0][j]
	int col0 = 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				matrix[i][0] = 0;
				if(j!=0){
					matrix[0][j] = 0;
				}else{
					col0=0;
				}
			}
		}
	}
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		if(row[i]|| col[j]){
	// 			matrix[i][j] = 0;
	// 		}
	// 	}
	// }
	//traverse the matrix but except the first row and first column
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[i][j]!=0){
				if(matrix[0][j]==0 || matrix[i][0]==0 ){
					matrix[i][j] = 0;
				}
			}
		}
	}
	//check if the first element of matrix is zero or not and first column is zero or not
	if(matrix[0][0]==0){
		for(int j=0;j<m;j++){
			matrix[0][j] = 0;
		}
	}
	if(col0==0){
		for(int i=0;i<n;i++){
			matrix[i][0] = 0;
		}
	}
	return matrix;
}
#include<bits/stdc++.h>
using namespace std;



int main(){


   

   return 0;
}