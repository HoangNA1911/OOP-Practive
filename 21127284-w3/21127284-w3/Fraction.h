#include<iostream>
#include<exception>
using namespace std;

class Fraction {
private:
	int _tu;
	int _mau;
public:
	Fraction();
	Fraction(int tu, int mau);
	Fraction(const Fraction&);

	int getTu()const { return this->_tu; }
	int getMau()const { return this->_mau; }
	void setTu(int value) { this->_tu = value; }
	void setMau(int value) { this->_mau = value; }
	void reduce();
	// cong tru nhan chia voi 1 Fraction
	Fraction operator+ (const Fraction&);
	Fraction operator- (const Fraction&);
	Fraction operator* (const Fraction&);
	Fraction operator/ (const Fraction&);
	Fraction operator= (const Fraction&);

	//so nguyen co tru nhan chia voi Fraction
	friend Fraction operator+( int value ,const Fraction&);
	friend Fraction operator-(const int&, Fraction);
	friend Fraction operator*( int,const Fraction&);
	friend Fraction operator/(const int&, Fraction);

	// cong tru nhan chia voi 1 so nguyen

	Fraction operator+(int value);
	Fraction operator-(int value);
	Fraction operator*(int value);
	Fraction operator/(int value);

	//kiem tra gia tri
	bool operator>(const Fraction&);
	bool operator<(const Fraction&);
	bool operator>=(const Fraction&);
	bool operator<=(const Fraction&);
	bool operator==(const Fraction&);
	bool operator!=(const Fraction&);

	//cac toan tu +=.....
	void operator+=(const Fraction&);
	void operator-=(const Fraction&);
	void operator*=(const Fraction&);
	void operator/=(const Fraction&);

	
	Fraction operator++();
	Fraction operator--();
	Fraction operator++(int);
	Fraction operator--(int);

	friend ostream& operator<<(ostream& out, const Fraction&);
	friend istream& operator>>(istream& out,  Fraction&);


	operator float()const {
		return (float)this->_tu / (float)this->_mau;
	}
};