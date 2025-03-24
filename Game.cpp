#include "Game.h"
#include <iostream>
using namespace std;

bool Game::Init(){
    return true;
}

void Game::Input(){
    cout << "input\n";
}

void Game::Update(){
    cout << "update\n";
}

void Game::Draw(){
    cout << "draw\n";
}

Game::Game() : isRunning(true) {}

Game::~Game() {}

void Game::Run(){
    if (!Init())
        isRunning = false;

    while (isRunning)
    {
        Input();
        Update();
        Draw();
    }
    cout << "run\n";
}

