#pragma once
#ifndef WORLD_H_
#define WORLD_H_

#include"WorldObject.h"

class Sprites;

class World : public WorldObject
{
public:
	virtual void set_width(coordinate_ widh) = 0;

	virtual void set_height(coordinate_ height) = 0;

	virtual void set_gravity(acceleration_ gravity) = 0;

	virtual coordinate_ get_width() = 0;

	virtual coordinate_ get_height() = 0;

	virtual acceleration_ get_graity() = 0;

	virtual void add_sprite(Sprites*) = 0;
};
#endif