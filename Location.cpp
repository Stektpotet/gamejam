#include "Location.h"


string Location::getName() {
	return name;
}

void Location::setName(string t) {
	name = t;
}

 Location::Location(string locationName, int locationId)
 {
 	name = locationName;
 	id = locationId;
 }
