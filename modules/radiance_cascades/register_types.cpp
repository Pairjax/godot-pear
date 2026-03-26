#include "register_types.h"

#include "core/object/class_db.h"
#include "radiance_cascades.h"

#ifdef THREADS_ENABLED
#define TVG_THREADS 1
#else
#define TVG_THREADS 0
#endif

void initialize_radiance_cascades_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	ClassDB::register_class<RadianceCascades>();
}

void uninitialize_radiancer_cascades_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}
