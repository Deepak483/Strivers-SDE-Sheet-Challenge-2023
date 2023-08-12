#include <bits/stdc++.h>
using namespace std;
//for first part where we have to find the row and colum of pascal triangle i.e element of pascal triangle implementation is 

int nCr(int n, int r){
  long long res = 1;
  for (int i = 0; i < r;i++){
    res = res * (n - i);
    res = res / (i + 1);
  }
  return res; //T.C => O(r)
}
vector<int> generateRow(int &row)
{
  vector<int> ans;
  ans.push_back(1);
  for (int col = 1; col < row; col++)
  {
    int res = 1;
    res = res * (row - col);
    res = res / col;
    ans.push_back(res);
  }
  return ans;
}

vector<vector<int>> pascalTriangle(int N)
{
  vector<vector<int>> ans;
  for (int i = 1; i <= N; i++)
  {
    ans.push_back(generateRow(i));
  }
  return ans;
}
int main()
{
  return 0;
}