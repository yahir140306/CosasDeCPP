#include <iostream>
#include <unistd.h>

using namespace std;

main() {
	int counter=0;

	cout<<"INICIANDO HACKING"<<endl;
	sleep(3);
	cout<<"Por Favor Espere..."<<endl;

	for (counter=0; counter <=100; counter++){

		cout<<"Hacking progress..."<<counter<<"%"<<endl;
		sleep(1);
	}

	cout<<"Estas dentro !!"<<endl;

	return 0;
}
