#include<iostream>
using namespace std;
class person{
	char name[30];
	int age;
	public:
		void getdata(void);
		void displaydata(void);
};
void person :: getdata(void){
	cout<<"enter name";cin>>name;
	cout<<"enter age";cin>>age;
} 
void person :: displaydata(void)
{
	cout<<"\n name"<<name;
	cout<<"\n age"<<age;
}
int main()
{
	person p;
	p.getdata();
	p.displaydata();
	return 0;
}
