#include"ConverterToRow.h"

string ConverterToRow::convert(Object* object) {
	Product* product = dynamic_cast<Product*>(object);
	stringstream builder;
	builder << setw(3) << setfill('0') << product->getID() << "|";
	builder << setw(35) << setfill(' ') << product->getName() << "|";
	builder << setw(20) << setfill(' ') << product->getPrice() << "|";
	string result;
	result = builder.str();
	return result;

}
string ConverterToRow::toString() {
	return"Converter to row";
}

