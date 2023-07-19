#include "src/game/envfx_snow.h"

const GeoLayout trollpillar2_geo[] = {
	GEO_CULLING_RADIUS(1000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, trollpillar2_Cube_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, trollpillar2_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
