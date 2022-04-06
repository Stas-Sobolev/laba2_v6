#pragma once
#ifndef  SPPRITES_H_
#define  SPPRITES_H_

#include "WorldPoint.h"
class Sprites : public WorldObject
{
private:
	World* world;
	WorldPoint place;
public:
	void set_world(World* world);
	void set_place(const WorldPoint& place);
	World* get_world()const;
	WorldPoint get_place()const;
	std::string get_point()const;

	Sprites(World* world, const WorldPoint& place);
	Sprites(World* world, coordinate_ x, coordinate_ y);
};
#endif
