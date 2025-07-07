# CMakeList.txt : CMake project for cpp_master_d2, include source and define
# project specific logic here.
#

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add source to this project's executable.
add_executable (cpp_master_d2  "Vehicle.cpp" 
        "1.Inheritance.cpp" "2.Polymorphism.cpp"
        "3.ScopsAndPtrMem.cpp" "4.DestructorsMisc.cpp"
        "5.StructOpOverloading.cpp" "6.functemplates.cpp"
        "7.ClassTemplates.cpp" "8.TempleteClassesMultiImplementation.cpp"
        "9.AutoTypes.cpp" "10.ForEachLoops.cpp"  # c++11 onwards
        "11.Lambdas.cpp" "12.SmartPointer.cpp"
        "13.Unions.cpp" "14.Modifier.cpp" 
        "15.EnumsExample.cpp"

        )



if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp_master_d2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
