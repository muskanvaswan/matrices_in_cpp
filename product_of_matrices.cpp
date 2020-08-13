
#include <iostream>

using namespace std;


void product(int a[10][10], int b[10][10],int p[10][10], int m, int c, int n );
int main()
{
  int x[10][10], y[10][10], p[10][10];
  int c=2,m=2,n=2;
  cout<<"enter c\n";
  cin>>c;
  cout<<"enter m\n";
  cin>>m;
  cout<<"enter n\n";
  cin>>n;

  cout<<"\nnow enter matrice 1\n";
  for(int i=0; i<m;i++)
  {
    for(int j=0; j<n;j++)
    {
      cout<<"element("<<i<<","<<j<<"): ";
      cin>>x[i][j];
    }
  }
  cout<<endl;
  cout<<"now enter matrice 2\n";
  for(int i=0; i<m;i++)
  {
    for(int j=0; j<n;j++)
    {
      cout<<"element("<<i<<","<<j<<"): ";
      cin>>y[i][j];
    }
  }

  product(x,y,p,m,c,n);
  cout<<"product is:\n";
  for(int i=0; i<m;i++)
  {
    for(int j=0; j<n;j++)
    {
      cout<<p[i][j]<<"  ";
    }
    cout<<endl;
  }
}

void product(int a[10][10], int b[10][10],int p[10][10], int m, int c, int n )
{
    for(int i=0; i<m;i++)
    {
      for(int j=0; j<n;j++)
      {
        p[i][j]=0;
      }
    }
  //where c is common order(columns in matrice 1 and rows in matrice 2)
  //m is the number of rows in matice 1
  //n is the number of columns in matrice 2
  for(int k=0;k<m;k++)
  {
    for(int i=0; i<m;i++)
    {
      for(int j=0; j<n;j++)
      {
        p[k][i]+= a[k][j]*b[j][i];
      }
    }
  }
}
