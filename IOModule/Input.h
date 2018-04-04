#include <iostream>
#include "Proxi.h"

class Input {
protected:
	istream& in;
	ostream& out;
public:
	virtual ~Input();
	virtual Proxi Run(const std::string&) = 0;
};
