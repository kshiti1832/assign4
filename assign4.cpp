// assign4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;

class Integer {
private:
	  int x;
public:
	Integer(int t) : x(10) { };
	int fun()const { return x; }
	void operator ++() {
		 ++x;
	}
	Integer operator ++(int) {
		Integer temp(0);
		temp.x = x++;
		return temp;
	}
	const Integer& operator += (const Integer& rhs) {
		this->x += rhs.x;
		//this->y += rhs.y;
		return *this;
	}


};
ostream& operator <<( std::ostream& cout, const Integer& I)
{
	cout << I.fun();

	return cout;
}



int main()
{
	Integer I(0);
	cout << "\nI=" << I.fun();

	cout << I << I;
	I++;
  /*  ++I;
	++I;
	++I;*/
	cout << "\nI=" << I.fun();
	I += 10;
    cout << "\nI=" << I.fun();
	I++;
	cout << "\nI=" << I.fun();
	_getch();
	//getch();

}