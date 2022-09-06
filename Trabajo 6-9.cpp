#include <iostream>
using namespace std;

int main()
{
	int diametro;
	cout<<"Introduzca el diametro de la esfera "<<endl;
	cin>>diametro;
	float radio;
	radio = diametro/2;
	cout<<"El radio de la esfera es: "<<radio<<endl;
	double pi;
	pi = 3.1416;
	float area;
	area = (4*pi*(radio*radio));
	cout<<"El area de la esfera es: "<<area<<endl;
	float volumen;
	volumen = ((4/3)*pi*(radio*radio*radio));
	cout<<"Su volumen es: "<<volumen<<endl;
	if(area>30)
	{
		cout<<"El area es gigante"<<endl;
	}
	else 
	{
		cout<<"El area es pequena"<<endl;
	}
	
	return 0;
	
}
