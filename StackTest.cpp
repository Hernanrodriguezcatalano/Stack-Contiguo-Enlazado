#include <cassert>
#include <iostream>
#include <array>
#include "StackContiguo.h"
using namespace std;

array<int, 10> Istack;
array<double, 5> Dstack;
array<unsigned, 10> Ustack;

stack Tstack;

int main() {
	cout << "Ingrese 10 numeros enteros";
	for (size_t i = 0; i < Istack.size; i++)
	{
		assert(cin >> Istack[i]);
	}
	cout << "Ingrese 5 numeros reales";
	for (size_t i = 0; i < Dstack.size; i++)
	{
		assert(cin >> Dstack[i]);
	}
	cout << "Ingrese 10 numeros positivos";
	for (size_t i = 0; i < Ustack.size; i++)
	{
		assert(cin >> Ustack[i]);
	}
	cout << "No deben ingresarse mas de 5 ingresos numericos";
	
	push(Tstack, 10);
