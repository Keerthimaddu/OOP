#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *arr,size;
	cout<<"enter the size of the integer array";cin>>size;
	cout<<"creating an array of size"<<size<<"..";
	arr=new int[size];
	cout<<"\n dynamic allocation of memory for array arr is successful";
	delete arr;
	getch();
}
