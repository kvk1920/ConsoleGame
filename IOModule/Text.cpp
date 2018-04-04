#include "Text.h"
#include <memory>

Text::Text(std::vector<std::string>&& text) : text_(std::move(text)) {}

void Text::Show(std::ostream& out) const {
	for (auto& line : text_) {
		out << line << std::endl;
	}
}

std::ostream& operator <<(std::ostream& out, const Text& text) {
	text.Show(out);
	return text;
}
