#pragma once
// #include "game/blocks_base_type/up_side_bottom__block.h"
//#include "game/block.h"
#include "app.h"
#include "blocks_mesh/BlockMesh_Common.h"
#include "blocks_uv_setter/BlockUVSetter_UP_Side_Bottom.h"
#include "block.h"

void registerBlockAll(BlockManager& bm)
{
	//air
	bm.addEmptyBlock(BlockInfo::newEmptyBlock());
	//grass
	bm.addBlock(
		BlockInfo(
			std::make_shared<BlockUVSetter_UP_Side_Bottom>(
				"grass_top",
				"grass_side",
				"grass_bottom"
			),
			std::make_shared<BlockMesh_Common>()
		)
	);
	App::getInstance().graphPtr->_textureManagerPtr->registBlockFacesEnd();
}