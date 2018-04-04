#include <memory>

template <typename T>
struct Proxy {

	std::string command;
	std::shared_ptr<T> object;

	Proxy() :
		command(""),
		object(nullptr)
	{}

	Proxy(const Proxy& other) {
		command = other.command;
		object = other.object;
	}

	Proxy(Proxy&& other) {
		command = std::move(other.command);
		object = std::move(other.object);
	}

	Proxy& operator =(const Proxy& other) {
		command = other.command;
		object = other.object;

		return *this;
	}

	Proxy& operator =(Proxy&& other) {
		command = std::move(other.command);
		object = std::move(other.object);

		return *this;
	}

	template <typename string>
	void PackCommand(string&& s) {
		object = nullptr;
		command = std::string(std::forward<string>(s));
	}

	void PackObject(std::shared_ptr<T> p) {
		command = "";
		object = p;
	}
		
	explicit operator bool() {
		return !command.empty() || object;
	}
}
