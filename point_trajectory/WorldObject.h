#pragma once
#ifndef WORLDOBJET_H_ 
#define WORLDOBJET_H_

#include<string>
#include<vector>

namespace my_type
{
	using speed_ = double;
	using time_ = unsigned long long int;
	using coordinate_ = double;
	using acceleration_ = double;
}

using namespace my_type;

class WorldObject
{
public:
	virtual std::string description()const = 0;
	virtual std::vector<std::string> tick() = 0;
};
#endif
