#ifndef RADIANCE_CASCADES_H
#define RADIANCE_CASCADES_H

#include "core/object/ref_counted.h"

/**
 * Module for implementing Radiance Cascades
 */
class RadianceCascades : public RefCounted {
	GDCLASS(RadianceCascades, RefCounted);

	int count;

protected:
	static void _bind_methods();

public:
	void test();

	RadianceCascades();
};

#endif // RADIANCE_CASCADES_H