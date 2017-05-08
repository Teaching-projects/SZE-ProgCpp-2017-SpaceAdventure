#ifndef RESOURCE_H
#define RESOURCE_H

#define MAX_RESOURCE_QUANTITY 20

enum ResourceType {
	hydrogen,
	oxygen,
	iron
};

struct Resource {
	ResourceType type;
	int resourceQuantity;
};

#endif