add_executable (ConcatMachine "Concat Machine.cpp" "Concat Machine.h")

project(ConcatMachine)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ConcatMachine PROPERTY CXX_STANDARD 20)
endif()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(PR_DEBUG)
endif()