
#include <iostream>

// Constantes para a tela
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

// Função para inicializar o SDL
bool init(SDL_Window** window, SDL_Renderer** renderer); {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Erro ao inicializar o SDL: " << SDL_GetError() << std::endl;
        return false;
    }

    *window = SDL_CreateWindow("RPG em C++ com SDL",
                               SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED,
                               SCREEN_WIDTH, SCREEN_HEIGHT,
                               SDL_WINDOW_SHOWN);
    if (*window == nullptr) {
        std::cerr << "Erro ao criar a janela: " << SDL_GetError() << std::endl;
        return false;
    }

    *renderer = SDL_CreateRenderer(*window, -1, SDL_RENDERER_ACCELERATED);
    if (*renderer == nullptr) {
        std::cerr << "Erro ao criar o renderizador: " << SDL_GetError() << std::endl;
        return false;
    }

    return true;
}

// Função principal
int main(int argc, char* argv[]) {
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    if (!init(&window, &renderer)) {
        std::cerr << "Falha na inicialização" << std::endl;
        return 1;
    }

    bool running = true;
    SDL_Event event;
    int x = SCREEN_WIDTH / 2;
    int y = SCREEN_HEIGHT / 2;
    const int speed = 5;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        const Uint8* state = SDL_GetKeyboardState(nullptr);
        if (state[SDL_SCANCODE_UP]) y -= speed;
        if (state[SDL_SCANCODE_DOWN]) y += speed;
        if (state[SDL_SCANCODE_LEFT]) x -= speed;
        if (state[SDL_SCANCODE_RIGHT]) x += speed;

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_Rect rect = { x, y, 50, 50 };
        SDL_RenderFillRect(renderer, &rect);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
