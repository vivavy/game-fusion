#include <engine/window.h>
#include <SDL.h>
#include <GL.h>

namespace GF {
    class Window {
        public:

        bool running;
        SDL::Window window;
        SDL::Renderer renderer;
        u64 ticks;

        Window() {
            SDL::init();

            if (!SDL::wasInit()) {
                std::cerr << "Error: cannot initialize SDL library" << std::endl;
                exit(EXIT_FAILURE);
            };

            SDL::Window window = SDL::createWindow("GameFusion", 0, 0, SDL::OPENGL|SDL::FULLSCREEN);
            
            SDL::Renderer renderer = SDL_CreateRenderer(window, 0, 0);
            
            this->window = window;
            this->renderer = renderer;
            
            this->running = true;

            GL::clearColor({0.5, 0.5, 0.5});
            GL::matrixMode(GL::PROJECTION);
            GL::loadIdentity();
            GL::perspective(45.0, 640.0/480.0, 1.0, 500.0);
            GL::enable(GL::DEPTH_TEST);
            GL::enable(GL::LIGHTING);
            GL::enable(GL::LIGHT0);
        };

        void startUpdate(void) {
            this->ticks = SDL::getTicks();
        };

        list<SDL::Event> getEvents(void) {
            list<SDL::Event> rv;
            SDL::Event event;

            while (event = SDL::pollEvent()) {
                rv.push_back(event);
            }

            return rv;
        };

        void flipScreen(void) {
            SDL_GL_SwapWindow(this->window);
            Uint32 c;
            if(c=(1000 / 144 > (SDL_GetTicks64() - this->ticks)))
                SDL_Delay(c);
        };

        void close(void) {
            SDL_Quit();
        };
    };
};
