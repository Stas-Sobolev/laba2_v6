#include "WorldPoint.h"

void WorldPoint::set_x(coordinate_ x)
{
    if (x < world->get_width() && x >= 0)
        this->x = x;
}

void WorldPoint::set_y(coordinate_ y)
{
    if (y < world->get_height() && y >= 0)
        this->y = y;
}

coordinate_ WorldPoint::get_x() const
{
    return x;
}

coordinate_ WorldPoint::get_y() const
{
    return y;
}

World* WorldPoint::get_world() const
{
    return world;
}

std::string WorldPoint::get_point() const
{
    return std::to_string(get_x()) + " " + std::to_string(get_y());
}

WorldPoint::WorldPoint(World* world, coordinate_ x, coordinate_ y):world(world)
{
    set_x(x);
    set_y(y);
}
