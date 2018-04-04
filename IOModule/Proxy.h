#include <memory>

template <typename T>
struct Proxy {
	union {
		std::string command;
		std::shared_ptr<T> object;
	} data;
	Proxy() :
		data.command(""),
		object(nullptr)
	{}
	Proxy(const Proxy& other) :

	Proxy(Proxy&&);
	Proxy& operator =(const Proxy&);
	Proxy
	template <typename string>
	void PackCommand(string&& s) {
		command = std::string(std::forward(s));
	}
	void PackObject();
	explicit operator bool();
}
