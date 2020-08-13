#include <iostream>

using namespace std;

void transpose(int a[10][10], int b[10][10], int m, int n );
void display(int x[10][10], int m, int n);
int main()
{
  int x[10][10], y[10][10], m, n;
  cout<<"enter number of rows:\n";
  cin>>m;
  cout<<"enter number of columns:\n";
  cin>>n;
  cout<<"\nnow enter matrice that you want to find transpose of: \n";
  for(int i=0; i<m;i++)
  {
    for(int j=0; j<n;j++)
    {
      cout<<"element("<<i<<","<<j<<"): ";
      cin>>x[i][j];
    }
  }
  cout<<"matrix entered is:\n";
  display(x,m,n);
  transpose(x,y,m,n);
  cout<<"\ntranspose of matrix:\n";
  display(y,n,m);

}
void display(int x[10][10], int m, int n)
{
  for(int i=0; i<m;i++)
  {
    for(int j=0; j<n;j++)
    {
      cout<<x[i][j]<<" ";
    }
    cout<<endl;
  }
}
void transpose(int a[10][10], int b[10][10], int m, int n )
{
  for(int i=0; i<m;i++)
  {
    for(int j=0; j<n;j++)
    {
      b[j][i]=a[i][j];
    }
  }
}
