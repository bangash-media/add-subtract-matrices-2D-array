#include <iostream>

using namespace std;

int main() 
{
	int mat1[2][2],mat2[2][2];
	//FOR MATRIX 1
	cout<<"Matrix A= "<<endl<<endl;
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cout<<i<<j<<" ";
		cout<<endl;
	}
	cout<<endl;
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		cout<<"Enter value in Position "<<i<<j<<" = "; 
		cin>>mat1[i][j];
	}
	}
	cout<<endl;
	//FOR MATRIX 2
	cout<<"Matrix B= "<<endl<<endl;
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cout<<i<<j<<" ";
		cout<<endl;
	}
	cout<<endl;
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		cout<<"Enter value in Position "<<i<<j<<" = "; 
		cin>>mat2[i][j];
	}
	}
	cout<<endl;
	//FOR ADDITION
	cout<<"Matrix A + Matrix B = "<<endl<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cout<<mat1[i][j]+mat2[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	//for subtraction
	cout<<"Matrix A - Matrix B = "<<endl<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cout<<mat1[i][j]-mat2[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
