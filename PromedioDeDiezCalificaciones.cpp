#include <iostream>
using namespace std;

main () {
	float promedioFinaly;
	float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
	
	cout<< "\n De: Juan Yahir Isidro Cervantes." <<endl;
	cout<< "\n Calcular El Promedio de 10 Calificaciones :)" <<endl;
	
	for (int x = 1; x <= 10; x++) {
	
		for (int i = 2; i<=10; i++) {
			
			cout<< "\n Ingrese sus calificaciones: "; cin>>x1;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x2;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x3;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x4;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x5;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x6;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x7;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x8;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x9;
			cout<< "\n Ingrese sus calificaciones: "; cin>>x10;
			
			promedioFinaly = (x1+x2+x3+x4+x5+x6+x7+x8+x9+x10)/10;
			
			cout<< "\n Tu promedio final es: "<<promedioFinaly<<endl;
		}
}
	return 0;
}
