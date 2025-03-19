#include <iostream>
#include <math.h>
#include <SDL2/SDL.h>

using namespace std;

int main() {
    // inicializar libreria SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        cout << "SDL_Init Error:" << SDL_GetError << endl;
        return 1;
    }

    /*  Crea una ventana de 1280 x 720 (HD) centrada en el monitor
        y crea un handle a la ventana grafica llamada win
    */
    SDL_Window *win = SDL_CreateWindow("Line Drawing Example", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_SHOWN);
    if (win == NULL) {
        cout << "SDL_CreateWindow Error:" << SDL_GetError() << endl;
        SDL_Quit();
        return 1;
    }


    /* Crea un render en la ventana grafica creada. Crear un render significa crear los procesos para poder
    desplegar algun gráfico en la pantalla. */
    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (ren == NULL) {
        SDL_DestroyWindow(win);
        cout << "SDL_CreateRenderer Error:" << SDL_GetError() << endl;
        SDL_Quit();
        return 1;
    }

    // Color de fondo blanco  (R = 255, G=255, B = 255, alfa = 255)
    SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
    // limpia el render con el color definido
    SDL_RenderClear(ren);

    // Set the draw color to black for the line
    SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);

    // Dibuja una linea que va desde (x1,y1) a (x2,y2)
    SDL_RenderDrawLine(ren, 100, 100, 500, 300);

    SDL_RenderPresent(ren);

    SDL_Delay(10000); // Show the window for 5 seconds

    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;
}