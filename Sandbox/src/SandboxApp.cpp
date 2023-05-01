#include <Hazel.h>

class Sandbox : public Hazel::Application {
public:
	Sandbox() {
	}
};

Hazel::Application* Hazel::CreateApplicaton() {
	return new Sandbox();
}