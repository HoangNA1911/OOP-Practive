#include"CFile.h"

CFile::CFile(string name, int size) {
	this->_name = name;
	this->_size = size;
	this->_hidden = true;
	this->_readOnly = true;
}
int CFile::size() {
	return this->_size;
}