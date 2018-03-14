#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include "StackEnlazado.h"

using namespace std;

static Stack Tstack;
static int a = 0, c;
using namespace std;

int main() {

	cout << "Ingrese la cantidad de elementos genericos a ingresar al Stack: ";
	unsigned N;
	cin >> N;
	assert(N > 0);
	cout << "El Stack es: " << endl;
	while (a < N)// nivel es 0
	{
		push(Tstack, rand() % 100);
		cout << "[" << Tstack.first->value << "]" << endl;
		++a;
	}
	
	EsPalindromo(Tstack);
	cout<< "El Stack invertido es :";
	while (a < N)// nivel es 0
	{
		push(Tstack, rand() % 100);
		cout << "[" << Tstack.first->value << "]" << endl;
		++a;
	}
}