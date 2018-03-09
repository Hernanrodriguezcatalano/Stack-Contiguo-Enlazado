#include "StackContiguo.h"
#include<iostream>
#include<cassert>
#include<array>


void push(stack& s , int x) {
	assert(s.i < N);
		s.a.at(s.i) = x;
		++s.i;

}
int pop(stack& s) {
	assert(s.i > 0);
	{
		--s.i;
	}
	return s.a.at(s.i);
}
	

int top(const stack& s) {
	if (s.i > 0) {
		return s.a.at(s.i - 1);
	}
	else {
		std::cout << "El Stack se encuentra vacio\n";
		return 0;
	}
}

unsigned length(const stack& s) {
	return s.i;
}

void vaciarStack(stack& s) {
	for (size_t i = 0; i < s.a.size; i++)
	{
		s.a[i] = 0;
	}
}
