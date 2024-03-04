#include <SDL.hpp>

u64 SDL::getTicks(void) {
    return SDL_GetTicks64();
};

SDL::Event SDL::pollEvent(void) {
    SDL_Event *rv;
    int status = SDL_PollEvent(rv);

    if (status)
        return (SDL::Event)rv;
    else return (SDL::Event)0;
};

int SDL::init(void) {
    return SDL_Init(SDL_INIT_EVERYTHING);
};

bool SDL::wasInit(void) {
    return SDL_WasInit(SDL_INIT_EVERYTHING);
};

SDL::Window SDL::createWindow(std::string title, long width, long height) {
    return (SDL::Window)SDL_CreateWindow((const char *)title.c_str(), 0, 0, width, height, 0);
};

SDL::Window SDL::createWindow(std::string title, long width, long height, int flags) {
    return (SDL::Window)SDL_CreateWindow((const char *)title.c_str(), 0, 0, width, height, flags);
};
