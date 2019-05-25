#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int arrProvinceA[7], arrProvinceB[7], arrProvinceC[7];
	int i=0;
	
	cout<<"Enter all temperature for a week of Province A, Province B and then Province C: "<<endl;
	for (i=0; i<7; i++)
	{
		cout<<"Province A, Day "<<i+1<<": ";
		cin>>arrProvinceA[i];
	}
	for (i=0; i<7; i++)
	{
		cout<<"Province B, Day "<<i+1<<": ";
		cin>>arrProvinceB[i];
	}
	for (i=0; i<7; i++)
	{
		cout<<"Province C, Day "<<i+1<<": ";
		cin>>arrProvinceC[i];
	}
	
	cout<<"Displaying Values: "<<endl;
	for (i=0; i<7; i++)
	{
		cout<<"Province A, Day "<<i+1<<"="<<arrProvinceA[i]<<endl;
	}
	for (i=0; i<7; i++)
	{
		cout<<"Province B, Day "<<i+1<<"="<<arrProvinceB[i]<<endl;
	}
	for (i=0; i<7; i++)
	{
		cout<<"Province C, Day "<<i+1<<"="<<arrProvinceC[i]<<endl;
	}
	
	getch();
	return 0;
}
