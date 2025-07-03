# CMakeList.txt : CMake project for cpp_master_d1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (cpp_master_d1 "myclass.cpp" 
              "1.recursion.cpp" "2.pointers.cpp" "3.arraypointers.cpp" 
              "4.simpleclass.cpp" "5.constructors.cpp" "6.copyconstruct.cpp")



if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp_master_d1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
