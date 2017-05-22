#include<iostream>
#include"HugeInt.h"

using namespace std;

	HugeInt::HugeInt(int Int){ number=Int; }
	HugeInt::HugeInt(string s){ str=s; }
	
	istream & operator >>(istream &in,HugeInt &H)
	{
	in>>H.number;
	return in;
	}
        ostream & operator <<(ostream &out,const HugeInt &H)
        {
        out<<H.number;
        return out;
        }

	HugeInt & HugeInt::operator=(const HugeInt &H)
	{
	number=H.number;
	return *this;
	}

	const HugeInt HugeInt::operator+(const HugeInt &H)
	{
	HugeInt temp1;
	temp1.number=number+H.number;
	return temp1;
	}

        const HugeInt HugeInt::operator-(const HugeInt &H)
        {
        HugeInt temp2;
        temp2.number=number-H.number;
        return temp2;
        }
	




















