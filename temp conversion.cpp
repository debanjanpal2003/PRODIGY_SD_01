#include<iostream>
#include<math.h>
using namespace std;
ctofk(){
	cout<<"enter the Celsius temp:";
	float c;
	cin>>c;
	float f,k;
	f=((9/5)*c)+32;
	k=c+273.15;
	cout<<"Fahrenheit temp = "<<f<<endl;
	cout<<"Kelvin temp = "<<k<<endl;
}
ftock(){
	cout<<"enter the Fahrenheit temp:";
	float f;
	cin>>f;
	float c,k;
	c=(f-32)*(5/9);
	k=(f-32)*(5/9)+273.15;
	cout<<"Celsius temp = "<<c<<endl;
	cout<<"Kelvin temp = "<<k<<endl;
}
ktocf(){
	cout<<"enter Kelvin temp:";
	float c;
	cin>>c;
	float f,k;
	c=k-273.15;
	f=(k-273.15)*(9/5)+32;
	cout<<"Fahrenheit temp = "<<f<<endl;
	cout<<"Kelvin temp = "<<k<<endl;
}
int main()
{
	char c;
	do{
	
	
	cout<<"\t WELCOME TO THE TEMPERATURE CONVERSION CALCULATOR !!!"<<endl;
	cout<<"\t\t\t1.CELSIUS"<<endl;
	cout<<"\t\t\t2.FAHRENHEIT"<<endl;
	cout<<"\t\t\t3.KELVIN"<<endl;
	//cout<<"\t\t\t4.EXIT"<<endl;
	cout<<"please select any one unit which will convert another two units"<<endl;
	int ch;
	cin>>ch;
	
	
	switch(ch)
	{
		case 1:
				ctofk();
				break;
		case 2:
				ftock();
				break;
		case 3:
				ktocf();
				break;
	}
	cout<<"do you want to continue? y or n...";
	cin>>c;
}while(c=='y'||c=='Y');
}
