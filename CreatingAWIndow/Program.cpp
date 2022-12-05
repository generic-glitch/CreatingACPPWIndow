#include <iostream>
#include "Window.h"

int main() {
	std::cout << "Creating window...\n";
	Window* pWindow = new Window();

	bool running = true;
	while (running)
	{
		if (!pWindow->ProcessMessages()) {
			std::cout << "Closing Window...\n";
			running = false;
		}
		// Render Window
		Sleep(16);
	}

	delete pWindow;

	return 0;
}