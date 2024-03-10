#include <iostream>
using namespace std;

int main() {
  int n,m;
  cout<<"enter number of rows and col";
  cin>>n>>m;
  cout<<"input matrix rowise";
  int a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
    for(int i=0;i<n;i++){
      for(int j=i;j<m;j++){
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
        
      }  
    }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
}