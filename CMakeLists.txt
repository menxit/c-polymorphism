cmake_minimum_required(VERSION 3.8)
project(HWC)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c lib/Object/Object.c lib/Object/Object.h lib/Animal/Animal.c lib/Animal/Animal.h lib/Dog/Dog.c lib/Dog/Dog.h lib/Cat/Cat.c lib/Cat/Cat.h)
add_executable(HWC ${SOURCE_FILES})
