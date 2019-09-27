// assign4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;

class Integer {
private:
	  int x;
public:
	Integer(int t) : x(10) {};
	int fun()const { return x; }
	void operator ++() {
		 ++x;
	}
	void operator ++(int) {
		x++;
	}
};
ostream& operator <<( std::ostream& cout, const Integer& I)
{
	cout << I.fun();

	return cout;
}


//Integer& operator += (const Integer& rhs) {
//	rhs + *this;
//	return *this;
//
//
//}

int main()
{
	Integer I(10);
	cout << "\nI=" << I.fun();

	cout << I << I;
	I++;
  /*  ++I;
	++I;
	++I;*/

	//I + I++;

	cout << "\nI=" << I.fun();
	I++;
	cout << "\nI=" << I.fun();
	_getch();
	//getch();

}