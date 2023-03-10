#include<iostream>
using namespace std;
main()
{
	int dizi[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if((i==0)|| (i==2)) dizi[i][j]=50;
			else dizi[i][j]=10;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<dizi[i][j] ;
		}
		cout<< endl;
	}
}
