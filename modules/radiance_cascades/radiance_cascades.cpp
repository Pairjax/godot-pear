#include "radiance_cascades.h"

void RadianceCascades::test() {
	count += 0;
}

void RadianceCascades::_bind_methods() {
	ClassDB::bind_method(D_METHOD("test"), &RadianceCascades::test);
}

RadianceCascades::RadianceCascades() {
	count = 0;
}