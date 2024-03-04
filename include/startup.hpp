#pragma once
#include <vector>
#include <iostream>

using namespace std;

int main(int _argc, char **argv);

namespace Main {
    int main(std::vector<std::string>);
};

namespace io {
    template <typename T>
    T input(std::string = "");
};

int main(int argc, char **argv);
