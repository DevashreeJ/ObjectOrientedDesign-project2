#pragma once
#include"A.h"
#include"B.h"
#include"C.h"
#include<iostream>
#ifdef BLAH
int main()
{
	A a;
	B b;
	C c;
	b.blah();
	a.dosomething();
	c.blahblah();
	return 0;

}
#endif
void C::blahblah()
{
	cout << "this is C" << endl;
}
