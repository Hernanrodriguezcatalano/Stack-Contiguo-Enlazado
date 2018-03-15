#include "stdafx.h"
#include <cassert>
#include <iostream>
#include "StackContiguo.h"
#include <Windows.h>

using namespace std;


static stack Tstack;
static int a = 0;
static int c;
int main(){
	cout << "Seleccione la funcion a testear:" << endl << "1.Push" << endl << "2.Pop" << endl << "3.Top" << endl;
	cin >> c;
	assert(c > 0 && c < 4);
	switch (c)
	{
	case 1:
		while (a<N)
		{
			push(Tstack, rand() % 100);
			cout << a << endl;
			++a;
		}
		cout << "Intentando Pushear un elemento al Stack lleno...";
		Sleep(3000);
		push(Tstack, rand() % 100);
	case 2:
		vaciarStack(Tstack);
		cout << "Intentando Popear un elemento del Stack vacio...";
		Sleep(3000);
		pop(Tstack);
	case 3:
		vaciarStack(Tstack);
		cout << "Intentando Topear una Stack vacio...";
		Sleep(3000);
		top(Tstack);
	}
	

