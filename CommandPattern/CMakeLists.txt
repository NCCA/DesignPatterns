# We will always try to use a version > 3.1 if avaliable
cmake_minimum_required(VERSION 3.2)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
   set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()
# name of the project It is best to use something different from the exe name
project(CommandPattern_build)

# Here we set the C++ standard to use
set(CMAKE_CXX_STANDARD 17)
# add include paths
include_directories(include)
# Now we add our target executable and the file it is built from.
add_executable(CommandPattern)
target_sources(CommandPattern PRIVATE src/Agent.cpp  
                                      src/Command.cpp  
                                      src/InputProcessor.cpp  
                                      src/main.cpp
                                      include/Agent.h  
                                      include/Command.h  
                                      include/InputProcessor.h )
