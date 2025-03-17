#pragma once
#include <iostream>


class Game
{
    private:
    bool isRunning;
    
        bool Init();
        void Input();
        void Update();
        void Draw();
    public:
        Game();
        ~Game();
    void Run();
};

