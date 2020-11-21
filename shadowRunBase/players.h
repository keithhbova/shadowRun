#ifndef PLAYERS_H
#define PLAYERS_H
#pragma once
#include "utils.h"

class Player{
public:
	std::string name;
	
	Player() = default;
	
	Player(std::string name){
		this->name = name;
	}
	
	std::string toString()const{
		std::stringstream ss;
		ss << name << std::endl;
		return ss.str();
	}
	
};



#endif