#include <vector>
#include <string>
#include <ostream>
#include <Information>

class Text : public Information {
private:
	std::vector<std::string> text_;
public:
	Text(std::vector<std::string>&& text);
	void Show(std::ostream&) const;
	friend std::ostream& operator <<(std::ostream&, const Text&);
};
