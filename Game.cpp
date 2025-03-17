#include "Game.h"
#include <iostream>

bool Game::Init()
{
    return true;
}

void Game::Input()
{
    std::cout << "input\n";
}

void Game::Update()
{
    std::cout << "update\n";
}

void Game::Draw()
{
    std::cout << "draw\n";
}

Game::Game() : isRunning(true) {}

Game::~Game() {}

void Game::Run()
{
    if (!Init())
        isRunning = false;

    while (isRunning)
    {
        Input();
        Update();
        Draw();
        std::cout << "run\n";
    }
}
