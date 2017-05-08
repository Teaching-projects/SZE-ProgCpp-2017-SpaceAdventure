#ifndef RESOURCE_H
#define RESOURCE_H

enum ResourceType {
	empty,
	hydrogen,
	oxygen,
	iron
};

struct Resource {
	static const int maxResourceQuantity = 20;
	ResourceType type;
	int resourceQuantity;
};

#endif