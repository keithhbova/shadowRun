#pragma once
#ifndef UTILS_H
#define UTILS_H
#include <fstream>
#include "yaml-cpp/yaml.h"
#include <string>
#include <sstream>
#include <stdio.h> 
// #define WINDOWS  
#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif
#include <iostream>
 




#endif