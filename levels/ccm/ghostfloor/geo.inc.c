#include "src/game/envfx_snow.h"

const GeoLayout ghostfloor_geo[] = {
	GEO_CULLING_RADIUS(10000),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_update_layer_transparency),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ghostfloor_viscol_006_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ghostfloor_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
