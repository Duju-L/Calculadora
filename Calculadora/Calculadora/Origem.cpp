#include <iostream>
#include "Calculadora.h"

int main()
{
	float opA = 3.0, opB = 5.0;
	Calculadora * calc = new Calculadora;
	std:: cout << "a soma 3+5 é igual a :" << calc->somar(opA, opB) << std::endl;
	return 0;
}
