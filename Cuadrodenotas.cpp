#include <iostream>

using namespace std;

int main()
{
    int nota=0;

    cout<<"ingrese la calificacion del alumno: ";
    cin >> nota;
    if (nota > 100 || nota < 0) 
	{
		cout <<"Ingrese una calificacion del 0 al 100: "; 
	
	
    }
	else
    
	if (nota == 100) 
	{
		cout<<" este estudiante obtuvo una nota de A++"<<endl; 
	}
	else
	if (nota >= 95 && nota <= 99)
	{
		cout<< " este estudiante obtuvo una nota de A+ " <<endl;
	}
	else
	if (nota >= 90 && nota <= 94)
	{
		cout<< " este estudiante obtuvo una nota de A " <<endl;
	}
	else
	if (nota >= 85 && nota <= 89)
	{
		cout<< " este estudiante obtuvo una nota de A- " <<endl;
	}
	else
	if (nota >= 80 && nota <= 84)
	{
		cout<< " este estudiante obtuvo una nota de B+ " <<endl;
	}
	else
	if (nota >= 75 && nota <= 79)
	{
		cout<< " este estudiante obtuvo una nota de B " <<endl;
	}
	else
	if (nota >= 70 && nota <= 74)
	{
		cout<< " este estudiante obtuvo una nota de B- " <<endl;
	}
	else
	if (nota >= 65 && nota <= 69)
	{
		cout<< " este estudiante obtuvo una nota de C+ " <<endl;
	}
	else
	if (nota >= 60 && nota <= 64)
	{
		cout<< " este estudiante obtuvo una nota de C " <<endl;
	}
	else
	if (nota >= 55 && nota <= 59)
	{
		cout<< " este estudiante obtuvo una nota de C- " <<endl;
	}
	else
	if (nota >= 50 && nota <= 54)
	{
		cout<< " este estudiante obtuvo una nota de D+ " <<endl;
	}
	else
	if (nota >= 45 && nota <= 49)
	{
		cout<< " este estudiante obtuvo una nota de D " <<endl;
	}
	else
	if (nota >= 40 && nota <= 44)
	{
		cout<< " este estudiante obtuvo una nota de D- " <<endl;
	}
	else
	if (nota >= 35 && nota <= 39)
	{
		cout<< " este estudiante obtuvo una nota de E+ " <<endl;
	}
	else
	if (nota >= 30 && nota <= 34)
	{
		cout<< " este estudiante obtuvo una nota de E " <<endl;
	}
	else
	if (nota >= 25 && nota <= 29)
	{
		cout<< " este estudiante obtuvo una nota de E- " <<endl;
	}
	else
	if (nota >= 20 && nota <= 24)
	{
		cout<< " este estudiante obtuvo una nota de F+ " <<endl;
	}
	else
	if (nota >= 15 && nota <= 19)
	{
		cout<< " este estudiante obtuvo una nota de F " <<endl;
	}
	else
	if (nota >= 9 && nota <= 14)
	{
		cout<< " este estudiante obtuvo una nota de F " <<endl;
	}
	else
	if (nota >= 5 && nota <= 9)
	{
		cout<< " este estudiante obtuvo una nota de F- " <<endl;
	}
	else
	if (nota >= 0 && nota <= 4)
	{
		cout<< " este estudiante obtuvo una nota de F-- " <<endl;
	}
        return 0;
}

