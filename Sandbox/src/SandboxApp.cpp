#include <Hazel.h>

class Sandbox : public Hazel::Application {
public:
	Sandbox() {
	}
};

void main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}