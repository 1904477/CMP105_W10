#pragma once
#include "Framework/TileMap.h"
class Map : public TileMap
{
public:
	Map();
	~Map();

	TileMap mapConf;
	
	void render(sf::RenderWindow *window);
};

