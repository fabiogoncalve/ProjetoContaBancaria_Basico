#include <iostream>
#include "conta.h"
#include <string>



using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	conta conta01;
	conta01.settitular("Fábio");
	conta01.setbanco("Santader");
	conta01.setAgencia(120);
	conta01.setnumconta(122556465168156);
	conta01.setsaldo(0);
	conta01.consultarsaldo(conta01);

	cout << endl;
	cout << "APOS DEPOSITAR 20EUROS" << endl;

	conta01.depositar(20);
	cout << endl;

	cout << "APOS LEVANTAR 25EUROS" << endl;
	conta01.levantar(25);


}

