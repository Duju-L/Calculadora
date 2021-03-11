#include <iostream>
#include "Calculadora.h"
using namespace std;

int main()
{
	float opA, opB;
	cout << "Informe o Primeiro valor: ";
	cin >> opA;
	cout << "Informe o Segundo valor: ";
	cin >> opB;
	Calculadora * calc = new Calculadora;
	cout << "a soma " << opA << "+" << opB << " eh igual a: " << calc->somar(opA, opB) << endl;
	cout << "a subtracao " << opA << "-" << opB << " eh igual a: " << calc->subtrair(opA, opB) << endl;
	cout << "a multiplicacao " << opA << "*" << opB << " eh igual a: " << calc->multiplicar(opA, opB) << endl;
	cout << "a divicao " << opA << "/" << opB << " eh igual a: " << calc->dividir(opA, opB) << endl;
	return 0;
}
