#pragma once
#include"Object.h";

#include"AddCurrentMonthParser.h"
#include"AddPrefixParser.h"
#include"OneSpaceOnlyParser.h"
#include"RemoveSpecialCharsParser.h"
#include"ReplaceParser.h"
class ParserFactory : public Object {
private:
	map<string, IParsable*> _container;

public:
	void registerWith(IParsable* parser);
	IParsable* create(string type);
	string toString() { return "factory"; }
};

void ParserFactory::registerWith(IParsable* parser) {
	_container.insert({ parser->parsedObjectName(), parser});
}

IParsable* ParserFactory::create(string type) {
	return _container[type];
}