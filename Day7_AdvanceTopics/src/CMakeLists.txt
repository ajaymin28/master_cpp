# CMakeList.txt : CMake project for cpp_master_advance_topics, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (cpp_master_advance_topics
          "1.virtual_inheritance.cpp" "2.function_objects.cpp" 
          "3.threads.cpp" "4.mutex.cpp" "5.atomic.cpp"
          "6.namespaces.cpp" "7.randomnumgen.cpp"
          "8.fileio.cpp" "9.constexpr.cpp"
        )


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp_master_advance_topics PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.