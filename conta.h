#pragma once
#include <iostream>
#include <string>

using namespace std;


class conta {


private:
	
	string banco, titular;
	float saldo;
	int agencia;
	long numconta;

public:


	//set:


	int setAgencia(int agencia);
	string setbanco(string banco);
	string settitular(string titular);
	long setnumconta(long numconta);
	float setsaldo(float saldo);

		//get

	int getagencia();
	string getbanco();
	string gettitular();
	long getnumconta();
	float getsaldo();


	void depositar(float valor);
	bool levantar(float valor);
	void consultarsaldo(conta &consulta);
	void transferir(conta &destino, float valor);

















};