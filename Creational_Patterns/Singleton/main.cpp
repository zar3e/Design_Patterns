#include "Singleton.h"

int main() {
    Singleton* singleton = Singleton::GetInstance("FIRSTH");
    std::cout << singleton->value() << "\n";
    Singleton* singleton2 = Singleton::GetInstance("SECOND");
    std::cout << singleton2->value() << "\n"; 
    return 0;
}