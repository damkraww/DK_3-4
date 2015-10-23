

#include "stdafx.h"
#include<iostream>

using namespace std;

template <typename T>
class Dodawanie
{
public:
	Dodawanie(T A, T B)
		: a(A), b(B)

	{ }

	T a, b;
};

typedef Dodawanie<int> DodawanieInt;


int main(void)
{
	int z;
	DodawanieInt X(7, 11);

	z = X.a + X.b;

	cout << "suma=" << z << "" <<endl;

	system("PAUSE");
}

