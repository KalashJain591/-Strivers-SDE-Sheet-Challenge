#include <bits/stdc++.h>
using namespace std;
  void setZeros(vector<vector<int>> &mat) {
      int i,m=mat[0].size(),n=mat.size(),j,colzr=0,rowzr=0;
      vector<int>row(n),col(m);  
      for(i=0;i<n;i++){
          for(j=0;j<m;j++){
              if(mat[i][j]==0){
              mat[i][0]=0;
              mat[0][j]=0;
              if(i==0)
              rowzr=1;
              if(j==0)
              colzr=1;
              }
          }
      }
      for(i=1;i<n;i++){
          for(j=1;j<m;j++){
              if(mat[i][j]==0)
              continue;
              if(mat[i][0]==0 || mat[0][j]==0)
              {
                  if(i==0||j==0){
                      if(colzr&&rowzr)
                      mat[i][j]=0;
                      else if(colzr&&j==0)
                      mat[i][j]=0;
                      else if(rowzr&&i==0)
                      mat[i][j]=0;
                  }
                  else
                  mat[i][j]=0;
              }
          }
      }
      if(rowzr==1){
      for(i=0;i<m;i++)
      {
          mat[0][i]=0;
      }}
      if(colzr==1){
      for(i=0;i<n;i++)
      {
          
          mat[i][0]=0;
      }}

    
    }

