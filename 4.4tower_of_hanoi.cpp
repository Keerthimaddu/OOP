#include<iostream>
using namespace std;
void TOH(int d,char tower2,char tower1,char tower3)
{
	if(d==1)
	{
		cout<<"\n shift top disk from tower"<<tower1<<"to tower"<<tower2;
		return;
	}
	TOH(d-1,tower3,tower2,tower1);
}
int main()
{
	int disk;
	cout<<"enter the number of disks";
	cin>>disk;
	if(disk<1)
	cout<<"\nThere are no disks to shift";
	else
	cout<<"\n There are"<<disk<<"disk in tower 1\n";
	TOH(disk,'1','2','3');
	cout<<"\n\n"<<disk<<"disks in tower 1 are shifted to tower2";
	return 0;
}
