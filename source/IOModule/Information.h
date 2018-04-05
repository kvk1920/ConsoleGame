#include <ostream>
#include <memory>

class Information {
public:
	virtual ~Information() {}
	virtual void Show(std::ostream&) const = 0;
	friend inline std::ostream& operator <<(
	std::ostream&, std::shared_ptr<const Information>);
};
