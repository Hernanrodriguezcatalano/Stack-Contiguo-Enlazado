#include "stdafx.h"
#include <cassert>
#include <iostream>
#include "StackContiguo.h"
#include <Windows.h>
using namespace std;
static unsigned a=1;
static int c;
static stack Tstack;
int main() {
	while(a<2){
		cout << "Ingresa un para para introducir al Stack: ";
		cin >> c;
		push(Tstack,c);
		cout << "1.Para introducir otro valor.[MAX 800]" << endl << "2.Para continuar." << endl;
		cin >> a;
		assert(a>0 && a<3);

	}

	cout << "El Stack: "<<endl;
	for (size_t i = 0; i < Tstack.i; i++)
	{
		cout << "[" << Tstack.a[i] << "]" << endl;
	}

	if (EsPalindromo(Tstack))
	{	
		
		cout << "Es Palindromo";
		cin >> a;
	}
	else
		{
		
		cout << "No es Palindromo";
		cin >> a;
	}
}
