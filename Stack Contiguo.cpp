#include "stdafx.h"
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
	assert(s.i > 0);
	{
		return s.a.at(s.i - 1);
	}
	

}

unsigned length(const stack& s) {
	return s.i;
}

void vaciarStack(stack& s) {
	for (size_t i = 0; i < s.a.size(); i++)
	{
		s.a[i] = 0;
	}
	s.i = 0;
}

bool EsPalindromo(const stack& s){
	//ir completando staux.a[j] 
	assert(s.a[0] != NULL);
	int min,max;
	stack staux;
	min = s.a[0];
	max = s.a[0];
	push(staux, s.a[0]);
	for (size_t i = 1; i < s.a.size(); i++)
	{
		if (s.a[i]>=max)
		{
			max = s.a[i];
		}
		if (s.a[i]<=min)
		{
			min = s.a[i];
		}
		if (s.a[i]>=min && s.a[i] <= max)
		{

		}
	}
}
