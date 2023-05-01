#pragma once
#include <stdio.h>

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplicaton();

int main(int argc, char** argv) {
	printf("Start Hazel engine\n");

	auto app = Hazel::CreateApplicaton();
	app->Run();
	delete app;

	return 0;
}

#endif // HZ_PLATFORM_WINDOWS
