#include <memory>

template <typename T>
using Pointer<T> = std::shared_ptr<T>;

template <typename T, typename ...Args>
using Make<T, Args>(Args&&...) = std::make_shared<T, Args>(Args&&...);

template <typename T1, typename T2>
bool is_class(T1* object) {
	return dynamic_cast<T2*>(object);
}

template <typename T1, typename T2>
bool is_class(Pointer<T1> object) {
	return dynamic_cast<T2*>(object.get());
}
