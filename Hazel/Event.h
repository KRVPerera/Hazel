#pragma once

#include "Hazel/Core.h"

#include <string>
#include <functional>

namespace Hazel {

	// Event are blocking

	enum class EventType {
		None = 0,
		WindoeClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
		AppTick, AppUpdate, AppRender,
		KeyPressed, KeyReleased,
		MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
	};

	enum EventCatagory {
		None = 0,
		EventCatagoryApplication = BIT(0),
		EventCatagoryInput = BIT(1),
		EventCatagoryKeyboard = BIT(2),
		EventCatagoryMouse = BIT(3),
		EventCatagoryMouseButton = BIT(4)
	};

	class HAZEL_API Event
	{
	public:
		virtual EventType GetEventType() const = 0;
		virtual const char* GetName() const = 0;
		virtual int GetCategoryFlags() const = 0;
		virtual std::string ToString() const { return GetName(); }

		inline bool IsInCategory(EventCatagory category) {
			return GetCategoryFlags() & category;
		}

	protected:
		bool m_Handled = false;
	};


}  // namespace Hazel