#include "conta.h"
#include <iostream>
#include <string>


using namespace std;
//set:


int conta::setAgencia(int agencia)
{

	return this->agencia = agencia;;

}
string conta::setbanco(string banco)

{

	return this->banco = banco;

}
string conta::settitular(string titular)
{

	return this->titular = titular;
}
long conta::setnumconta(long numconta)

{

	return this->numconta = numconta;
}
float conta::setsaldo(float saldo)
{

	return this->saldo = saldo;
}

//get

int conta::getagencia()
{
	return agencia;
}
string conta::getbanco() 
{
	return banco;
}
string conta::gettitular()
{
	return titular;

}
long conta::getnumconta()
{
	return numconta;
}
float conta::getsaldo()
{
	return saldo;
}

void conta::depositar(float valor) 
{

	saldo += valor;

	cout << "Depósito efetuado com sucesso, o seu saldo actual é de: " << saldo << endl;

}

bool conta::levantar(float valor)
{
	if (valor > saldo)
	{
		cout << "Operação negada. Saldo inferior ao pedido." << endl;
		return false;
	}
	else
	{
		saldo -= valor;
		cout << "Operação com sucesso, o seu saldo  actual é de:" << saldo << endl;
		return true;
	}
}

void conta::consultarsaldo(conta&destino)
{
	std::cout << "\n********* CONSULTA CONTA *********" << std::endl;
	std::cout << " CONTA CORRENTE: " << numconta << std::endl;
	std::cout << " TITULAR:" << titular << std::endl;
	std::cout << " SEU SALDO ATUAL: " << saldo << std::endl;
	std::cout << "\n ACAO CONCLUIDA COM SUCESSO " << std::endl;

}


void conta::transferir(conta& destino, float valor)
{

	if (valor > saldo)
	{
		cout << "Operação inaválida, saldo insuficiente" << endl;
	}
	else
	{
		destino.depositar(valor);
		saldo -= valor;
		std::cout << "\n********* TRANSFERENCIA *********" << std::endl;
		std::cout << " CONTA CORRENTE: " << numconta << std::endl;
		std::cout << " TITULAR:" << titular << std::endl;
		std::cout << " ---------------------------------" << std::endl;
		std::cout << " CONTA DESTINO: " << destino.numconta << std::endl;
		std::cout << " TITULAR: " << destino.titular << std::endl;
		std::cout << " ---------------------------------" << std::endl;
		std::cout << " VALOR TRANSFERIDO: " << valor << std::endl;
		std::cout << " SEU SALDO ATUAL: " << saldo << std::endl;
		std::cout << "\n ACAO CONCLUIDA COM SUCESSO " << std::endl;


	}







}

