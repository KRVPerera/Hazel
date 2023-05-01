#pragma once
#include <stdio.h>

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplicaton();

int main(int argc, char** argv) {
	printf("Start Hazel engine\n");

	Hazel::Log::Init();

	HZ_CORE_INFO("Initialized Log!");
	int a = 4;
	HZ_WARN("Initialized Log! : {0}", a);

	auto app = Hazel::CreateApplicaton();
	app->Run();
	delete app;

	return 0;
}

#endif // HZ_PLATFORM_WINDOWS
