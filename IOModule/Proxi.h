enum class DataType : bool {
	kCommand,
	kData
};

template <typename T>
struct Proxy {
	DataType type;
	union {
		std::string command;
		T object;
	} data;
	template <typename String>
	void PackCommand(;
	void PackObject();
}
