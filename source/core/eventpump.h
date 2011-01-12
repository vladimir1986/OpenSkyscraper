#ifndef OSS_CORE_EVENTPUMP_H
#define OSS_CORE_EVENTPUMP_H

#include "event.h"
#include "object.h"


namespace OSS {
	namespace Core {
		class EventPump : public Object {
			
			/**
			 * The event pump is simply put a basic abstract superclass for other event pumps. It
			 * requires all subclasses to implement at least the getNextEvent() function which
			 * should return unhandled events or NULL if there are no more.
			 */
		public:
			virtual Event * getNextEvent() = 0;
		};
	}
}


#endif