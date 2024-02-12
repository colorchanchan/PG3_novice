#include <Novice.h>
#include "Manager/GameManager.h"

const char kWindowTitle[] = "LE2D_09_コウザキ_ルカ";

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	SetConsoleOutputCP(65001);

	std::unique_ptr<GameManager> gameManager = std::make_unique<GameManager>();
	gameManager->Run();

	return 0;
}