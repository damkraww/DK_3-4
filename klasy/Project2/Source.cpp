#include <iostream>

using namespace std;

char a, b, c, d, e, f;

class Klasa1
{
public:
	Klasa1()
	{
		zmienna1 = a;
		zmienna2 = b;
		zmienna3 = c;
	}
public:
	int zmienna1;
	void wyswietl1()
	{
		cout << zmienna1 << endl;
	}
private:
	int zmienna2;
	void wyswietl2()
	{
		cout << zmienna2 << endl;
	}
protected:
	int zmienna3;
	void wyswietl3()
	{
		cout << zmienna3 << endl;
	}

};

class Klasa2 : public Klasa1
{
public:
	Klasa2()
	{
		zmienna1 = a;
		//    zmienna2=b;  skladnik prywatny
		zmienna3 = c;
		zmienna4 = d;
		zmienna5 = e;
		zmienna6 = f;
	}
public:
	int zmienna4;
	void wyswietl4()
	{
		cout << zmienna4 << endl;
	}
private:
	int zmienna5;
	void wyswietl5()
	{
		cout << zmienna5 << endl;
	}
protected:
	int zmienna6;
	void wyswietl6()
	{
		cout << zmienna6 << endl;
	}
public:
	void pokaz_klase1(int x)
	{
		cout << x;
	}
};

using namespace std;

int main()
{
	Klasa1 o1;
	o1.wyswietl1();
	//    o1.wyswietl2();   //private
	//   o1.wyswietl3();   //protected

	Klasa2 o2;
	o2.wyswietl4();
	//   o2.wyswietl5();     //private
	//  o2.wyswietl6();     //protected

	o2.pokaz_klase1(o2.zmienna1);
	// o2.pokaz_klase1(o2.zmienna3); protected

	system("pause");
}