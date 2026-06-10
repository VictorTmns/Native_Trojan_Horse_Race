#include "Core/Engine.h"
#include <memory>

int main()
{
	auto engine{ std::make_unique<NTHR::Engine::Engine>() };

	engine->Start();
}