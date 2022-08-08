cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(eigen-playground)

find_package(Eigen3 3.4.0 EXACT REQUIRED PATHS ${EIGEN_ROOT})

SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

add_executable(${PROJECT_NAME} 
  "src/main.cpp"
)
target_link_libraries(${PROJECT_NAME} Eigen3::Eigen)