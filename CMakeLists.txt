cmake_minimum_required(VERSION 3.1)
project(shadowRun)

add_subdirectory(3rdParty/yaml-cpp)

add_executable(
	shadowRun
	main.cpp	
	)

target_link_libraries(
	shadowRun
	PRIVATE
	yaml-cpp
)
