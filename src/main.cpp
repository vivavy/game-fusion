#include <engine.hpp>
#include <startup.hpp>
#include <SDL.hpp>

int Main::main(list<string> args) {
    for (string arg : args) {
        std::cout << arg << '\n';
    }
    std::cout << '\n';

    GF::Window window;

    bool running = true;

    while (running) {
        window.startUpdate();

        for (SDL::Event event : window.getEvents()) {
            if (event->type == SDL_QUIT) {
                running = false;
            };

            window.flipScreen();
        };

        window.close();
    };

    return 0;
};
