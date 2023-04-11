#pragma once
#include"CircleParser.h"
#include"RectangleParser.h"
#include"SquareParser.h"
class ParserFactory {
public:
	IParsable* create(string type) {
        IParsable* parser = NULL;

        if ("Rectangle" == type) {
            parser = new RectangleParser();
        }
        else if ("Square" == type) {
            parser = new SquareParser();
        }
        else if ("Circle" == type) {
            parser = new CircleParser();
        }

        return parser;
	}

};