#include <startup.hpp>

int main(int _argc, char **argv) {
    std::vector<std::string> args;

    for (int i; argv[i]; i++) {
        args.push_back(argv[i]);
    }

    return Main::main(args);
};

namespace io {

    template <typename T>
    T input(string prompt = "") {
        T rv;

        std::cout << prompt;
        std::cin >> &rv;

        return rv;
    };
};
