cmake_minimum_required(VERSION 3.1)
project(shadowRun)

add_subdirectory(3rdParty/yaml-cpp)

include_directories(${shadowRunBase})

add_executable(
	shadowRun shadowRunBase/main.cpp shadowRunBase/skills.cpp shadowRunBase/players.cpp	
	)



target_link_libraries(
	shadowRun
	PRIVATE
	yaml-cpp
)


