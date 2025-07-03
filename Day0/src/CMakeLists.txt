# CMakeList.txt : CMake project for cpp_master_d0, include source and define
# project specific logic here.

# Add source to this project's executable.
# Make Sure only one of the source have the main()
add_executable (cpp_master_d0
                "1.printstring.cpp" "2.sumnum.cpp"
                "3.conditions.cpp" "4.controlloops.cpp" 
                "5.nestedconditon.cpp" "6.func_and_datatypes.cpp" 
                "7.passbyvalref.cpp" "8.func_overloading.cpp" 
                )



if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp_master_d0 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
