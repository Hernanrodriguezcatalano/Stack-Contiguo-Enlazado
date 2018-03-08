#include<iostream>
#include<array>

const unsigned N = 32767;
struct stack {
	std::array<int, N> a;
	unsigned i = 0;
};

void push(stack&, int);
int pop(stack&);
int top(const stack&);
unsigned length(const stack&);
void vaciarStack(stack&);