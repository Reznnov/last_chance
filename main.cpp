#include "Game.h"

int main(int argc, char* argv[]) {
    Game game;
    
    if (!game.init("my last streamer sumer", 800, 600)) {
        return -1;
    }
    
    game.run();
    game.clean();
    
    return 0;
}
