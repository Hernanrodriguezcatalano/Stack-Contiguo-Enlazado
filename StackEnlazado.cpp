#include "stdafx.h"
#include "StackEnlazado.h"
#include<iostream>
#include<cassert>

void push(Stack& s, int x) {
	Nodo *p = new Nodo;
	p->value = x;
	p->next = s.first;
	s.first = p;
	++s.nivel;
}
int pop(Stack& s) {
	assert(s.nivel != 0); 
		Nodo *p = s.first;
		s.first = s.first->next;
		--s.nivel;
		return p->value;
}

int top(const Stack& s) {
	assert(s.nivel != 0);
		return s.first->value;
}

unsigned length(const Stack& s) {
	return s.nivel;
}

void vaciarStack(Stack& s) {
	s.first = nullptr;
	s.nivel = 0;
}


/*void ReverseStack(Stack s)
{
	assert(s.nivel != NULL);
	Stack staux;
	Nodo *temp = s.first;
	while (temp != NULL)
	{
		push(s, temp->value);
		temp = temp->next;
	}
	temp->value = top(s);
	s.first = temp;
	while (s.nivel != NULL)
	{
		temp->next->value = top(s);
		pop(s);
		temp = temp->next;
	}
	temp->next = NULL;
}*/

bool EsPalindromo(Stack s) {
	//condiciones para true
	//1.cortar las lista a la mitad
	//2.si es impar ignorar el medio
	//3.revertir la segunda lista
	//4.comparar las listas

	assert (s.nivel != NULL);
	Stack staux;
	int Long = s.nivel;
	//Nodo *temp = s.first;
	/*while (temp != NULL)
	{
		push(s, temp->value);
		temp = temp->next;
	}
	temp->value = top(s);
	s.first = temp;
	while (s.nivel!= NULL)
	{
		temp->next->value = top(s);
		pop(s);
		temp = temp->next;
	}
	temp->next = NULL;
	*/

	for (size_t i = 0; i < Long-1; i++)
	{
		staux.first->value = s.first->value;
		staux.nivel = s.nivel;
	}
	for (size_t i = 0; i < Long; i++)
	{
		if (s.first->value != staux.first->value)
		{
			return false;
		}
	}
 		return true;
}
   