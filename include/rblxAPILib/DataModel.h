#ifndef DATAMODEL_H
#define DATAMODEL_H
#include <rblxAPILib/Object.h>
#include <vector>

class DataModel {
	public:
		double PlaceVersion;
		std::vector<Object*> children;
};

#endif