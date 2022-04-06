#include "Sprites.h"

void Sprites::set_world(World* world)
{
    this->world = world;
}

void Sprites::set_place(const WorldPoint& place)
{
    this->place = place;
}

World* Sprites::get_world() const
{
    return place.get_world();
}

WorldPoint Sprites::get_place() const
{
    return place;
}

std::string Sprites::get_point() const
{
    return place.get_point();
}

Sprites::Sprites(World* world, const WorldPoint& place):world(world),place(place)
{
}

Sprites::Sprites(World* world, coordinate_ x, coordinate_ y):Sprites(world,WorldPoint(world, x, y))
{
}
