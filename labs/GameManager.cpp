
#include"GameManager.h"
#include<iostream>
GameManager::GameManager() {

}

GameManager::~GameManager() {

}

void GameManager::handleInput() {
	std::cout << "Handle Input" << std::endl;
}

void GameManager::update() {
	std::cout << "update" << std::endl;
}

void GameManager::draw() {
	std::cout << "draw" << std::endl;
}