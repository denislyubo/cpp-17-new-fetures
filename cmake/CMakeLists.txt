cmake_minimum_required (VERSION 2.8)

set(CMAKE_C_COMPILER /usr/local/bin/gcc-8.1.0)
set(CMAKE_CXX_COMPILER /usr/local/bin/g++-8.1.0)
link_directories(/usr/local/lib64)

set(PROCESSOR_BITS 64)

project(main)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -m${PROCESSOR_BITS} -msse -msse2 -Wall -fPIC -pthread -Wunknown-pragmas -fvisibility=hidden")
set (CMAKE_C_FLAGS	"${CMAKE_C_FLAGS} -m${PROCESSOR_BITS} -fPIC -m${PROCESSOR_BITS}")
set (CMAKE_EXE_LINKER_FLAGS	"${CMAKE_EXE_LINKER_FLAGS}  -fPIC -m${PROCESSOR_BITS}")
set (CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -fPIC -m${PROCESSOR_BITS}")
set (CMAKE_SHARED_LINKER_FLAGS  "${CMAKE_SHARED_LINKER_FLAGS} -fPIC -m${PROCESSOR_BITS}")

add_subdirectory(optional-variant-any optional-variant-any)
