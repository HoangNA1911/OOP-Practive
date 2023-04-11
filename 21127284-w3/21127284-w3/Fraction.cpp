#include"Fraction.h"

//int gcd(int a, int b) {
//	if (b == 0)
//		return a;
//	return gcd(b, a % b);
//}
//void Fraction::reduce() {
//	this->_tu = this->_tu / gcd(this->_tu, this->_mau);
//	this->_mau = this->_mau / gcd(this->_tu, this->_mau);

//}
Fraction::Fraction() {
	this->_tu = 0;
	this->_mau = 1;
}
Fraction::Fraction(int tu, int mau){
	if (mau != 0) {
		this->_tu = tu;
		this->_mau = mau;
	}
}
Fraction::Fraction(const Fraction& a) {
	this->_tu = a._tu;
	this->_mau = a._mau;
}


Fraction Fraction::operator+ (const Fraction& other) {
	Fraction result;
	result._tu = this->_tu * other._mau + this->_mau * other._tu;
	result._mau = other._mau * this->_mau;
	return result;
}
Fraction Fraction::operator- (const Fraction& other) {
	Fraction result;
	result._tu = this->_tu * other._mau - this->_mau * other._tu;
	result._mau = other._mau * this->_mau;

	return result;
}
Fraction Fraction::operator* (const Fraction& other) {
	Fraction result;
	result._tu = this->_tu * other._tu;
	result._mau = this->_mau * other._mau;

	return result;
}
Fraction Fraction::operator/ (const Fraction& other) {
	Fraction result;
	result._tu = this->_tu * other._mau;
	result._mau = this->_mau * other._tu;

	return result;
}
Fraction Fraction::operator= (const Fraction& other) {
	this->_tu = other._tu;
	this->_mau = other._mau;
	return *this;
}




Fraction Fraction::operator+ (int value) {
	Fraction result;
	result._tu = this->_tu + value * this->_mau;
	result._mau = this->_mau;

	return result;
}
Fraction Fraction::operator- (int value) {
	Fraction result;
	result._tu = this->_tu - value * this->_mau;
	result._mau = this->_mau;
	return result;
}
Fraction Fraction::operator* (int value) {
	Fraction result;
	result._tu = this->_tu *value;
	result._mau = this->_mau;
	return result;
}
Fraction Fraction::operator/ (int value) {
	Fraction result;
	result._tu = this->_tu ;
	result._mau = this->_mau*value;
	return result;
}

void Fraction::operator+=(const Fraction&other) {

	this->_tu = this->_tu*other._mau + other._tu*this->_mau;
	this->_mau = this->_mau*other._mau ;
	
}
void Fraction::operator-=(const Fraction& other) {
	
	this->_tu = this->_tu*other._mau - other._tu * this->_mau;
	this->_mau = this->_mau*other._mau;
	
}
void Fraction::operator*=(const Fraction& other) {

	this->_tu = this->_tu * other._tu;
	this->_mau = this->_mau * other._mau;
}
void Fraction::operator/=(const Fraction& other) {

	this->_tu = this->_tu * other._mau;
	this->_mau = this->_mau * other._tu;
}



bool Fraction::operator>(const Fraction& other) {
	if ((double)this->_tu / this->_mau > (double)other._tu / other._mau) {
		return true;
	}
	return false;
}
bool Fraction::operator<(const Fraction& other) {
	if ((double)this->_tu / this->_mau < (double)other._tu / other._mau) {
		return true;
	}
	return false;
}
bool Fraction::operator==(const Fraction& other) {
	if ((double)this->_tu / this->_mau == (double)other._tu / other._mau) {
		return true;
	}
	return false;
}
bool Fraction::operator>=(const Fraction& other) {
	if ((double)this->_tu / this->_mau >= (double)other._tu / other._mau) {
		return true;
	}
	return false;
}
bool Fraction::operator<=(const Fraction& other) {
	if ((double)this->_tu / this->_mau <= (double)other._tu / other._mau) {
		return true;
	}
	return false;
}
bool Fraction::operator!=(const Fraction& other) {
	if ((double)this->_tu / this->_mau != (double)other._tu / other._mau) {
		return true;
	}
	return false;
}


Fraction operator+( int value,const Fraction& other) {
	Fraction result;
	result.setTu(other.getTu()+other.getMau()*value);
	result.setMau(other.getMau());
	return result;
}
Fraction operator*(int value, const Fraction& other) {
	Fraction result;
	result.setTu(other.getTu() * value);
	result.setMau(other.getMau());
	return result;
}
Fraction operator-(int value, const Fraction& other) {
	Fraction result;
	result.setTu(other.getTu() - other.getMau() * value);
	result.setMau(other.getMau());
	return result;
}
Fraction operator/(int value, const Fraction& other) {
	Fraction result;
	result.setTu(other.getTu() );
	result.setMau(other.getMau() * value);
	return result;
}


Fraction Fraction::operator++() {
	Fraction temp = *this;
	this->_tu = this->_tu + this->_mau;
	return temp;
}
Fraction Fraction::operator--() {
	Fraction temp = *this;
	this->_tu = this->_tu - this->_mau;
	return temp;

}

Fraction Fraction::operator++(int ) {
	
	Fraction result;
	result._tu = this->_tu + this->_mau;
	return result;
}
Fraction Fraction::operator--(int ) {
	
	Fraction result;
	result._tu = this->_tu - this->_mau;
	return result;
}
ostream& operator<<(ostream& out, const Fraction& other) {
	out << other.getTu() << "/" << other.getMau();
	return out;
}
istream& operator>>(istream& in, Fraction& other) {
	cout << "Nhap tu va mau cho phan so: ";
	in >> other._tu >> other._mau;
	return in;
}