# CMakeList.txt : CMake project for cpp_master_cpu_sim, include source and define
# project specific logic here.
#

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add source to this project's executable.
add_executable (cpp_master_cpu_sim  
          "Cache.cpp"
          "main.cpp"
        )



if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp_master_cpu_sim PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.