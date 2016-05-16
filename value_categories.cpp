#include <iostream>
#include <sstream>
#include <fstream>

void f(int&&) {
    std::cout << "&&" << std::endl;
}
void f(int&) {
    std::cout << "&" << std::endl;
}

int main() {
    auto n = 10;
    // Identifier of a variable is almost always an lvalue.
    f(n);
    // 42, like most literals, is a prvalue.
    f(42);
    // int{} is a prvalue.
    f(int{});

    std::string they, make, what;
    std::stringstream{"Cats make chaos"} >> they >> make >> what;
    std::ofstream{"note.txt"} << they << make << what;
    return 0;
}
