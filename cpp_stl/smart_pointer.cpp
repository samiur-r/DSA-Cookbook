#include <iostream>
#include <memory> // Required for std::shared_ptr, std::weak_ptr

class MyClass
{
public:
    MyClass() { std::cout << "MyClass constructed" << std::endl; }
    ~MyClass() { std::cout << "MyClass destroyed" << std::endl; }
};

int main()
{
    std::shared_ptr<MyClass> myClassPtr = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> weakPtr = myClassPtr;

    if (auto sharedPtr = weakPtr.lock())
        // Use lock() to create a shared_ptr from a weak_ptr
        std::cout << "Object still alive!" << std::endl;

    else
        std::cout << "Object destroyed!" << std::endl;

    return 0;
}
