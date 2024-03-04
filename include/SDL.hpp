#pragma once
#include <engine.hpp>
#include <SDL2/SDL.h>
#include <string>

namespace SDL {
    typedef SDL_Window *Window;
    typedef SDL_Renderer *Renderer;
    typedef SDL_Event *Event;

    int OPENGL = SDL_GL_ACCELERATED_VISUAL | SDL_VIDEO_OPENGL;
    int FULLSCREEN = SDL_WINDOW_FULLSCREEN;

    u64 getTicks(void);
    Event pollEvent(void);
    int init(void);
    bool wasInit(void);
    SDL::Window createWindow(std::string title, long widht, long height);
    Window createWindow(std::string title, long widht, long height, int flags);
};
