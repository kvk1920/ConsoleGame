#include "Information.h"

std::ostream& operator <<(std::ostream& out, std::shared_ptr<const Information> object) {
	object->Show(out);
	return out;
}
