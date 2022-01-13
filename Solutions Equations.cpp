#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b, c, x1, x2, x, d;
	cout << "Entrer les 3 coefficients : ";
	cin >> a>> b>> c;
	
	d = b^2 - 4*a*c;
	
	 	if( d < 0)
	 	{
	 		cout << "L'equation n'admet pas de solutions";	
		}
		
		else 
			if(d = 0)
			{
			int x = -b/ 2*a;
			cout << "La solution de l'equation est : " << x;
			}
			
			else {
			x1 = (-b - sqrt(d)) / 2*a;
			x2 = (-b + sqrt(d)) / 2*a;	
			
			cout << "Les solutions de l'equation sont : X1 = " << x1 << " et X2 = " << x2;
			}
			
	return 0;
}

