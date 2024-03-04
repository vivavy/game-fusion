#pragma once
#include <SDL.h>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <iostream>
#include <GL.h>
#include <cmath>

namespace GF {
    class Window {
        public:

        bool running;
        SDL::Window window;
        SDL::Renderer renderer;
        u64 ticks;

        Window(void);
        std::vector<SDL::Event> getEvents(void);
        void startUpdate(void);
        void flipScreen(void);
        void close(void);
    };
};
