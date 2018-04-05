#include <iostream>
#include "Proxy.h"

class Input {
protected:
	istream& in;
	ostream& out;
public:
	virtual ~Input();
	virtual Proxy Run(const std::string&) = 0;
};
