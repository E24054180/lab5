#include<iostream>
#include<string>

using namespace std;

class HugeInt{

friend istream & operator>>(istream &,HugeInt &);
friend ostream & operator<<(ostream &,const HugeInt &);

public:
	HugeInt(int=0);
	HugeInt(string);

	HugeInt & operator=(const HugeInt & );
	const HugeInt operator+(const HugeInt &);
	const HugeInt operator-(const HugeInt &);

private:
	int number;
	string str;
	};





