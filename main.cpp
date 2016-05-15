#include <iostream>
#include <random>

static std::random_device rd;
static std::mt19937 gen{rd()};
const static int N = 5;

void PrintUniformValues()
{
    std::uniform_int_distribution<> dist{0, 99};

    std::cout << "Uniform Ints between 0 and 99:" << std::endl;
    for (auto i = 0; i < N; ++i)
    {
        std::cout << dist(gen) << std::endl;
    }
}
void PrintCoinTosses()
{
    std::bernoulli_distribution dist{0.5};
    std::cout << "Fair coin tosses:" << std::endl;
    for (auto i = 0; i < N; ++i)
    {
        std::cout << (dist(gen) ? "head" : "tail") << " ";
    }
    std::cout << std::endl;
}

int main() {
    PrintUniformValues();
    PrintCoinTosses();
    return 0;
}