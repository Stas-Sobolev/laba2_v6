#pragma once
#ifndef LOCATION_H_
#define LOCATION_H_
#include<list>
#include "Sprites.h"
class Location : public World
{
private:
	coordinate_ width;
	coordinate_ height;
	acceleration_ gravity;
	std::list<Sprites*> sprites;
public:


	// Унаследовано через World
	virtual std::string description() const override;

	virtual std::vector<std::string> tick() override;

	virtual void set_width(coordinate_ widh) override;

	virtual void set_height(coordinate_ height) override;

	virtual void set_gravity(acceleration_ gravity) override;

	virtual coordinate_ get_width() override;

	virtual coordinate_ get_height() override;

	virtual acceleration_ get_graity() override;

	virtual void add_sprite(Sprites*) override;

};
#endif
