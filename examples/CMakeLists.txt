add_executable(example example.cpp)
target_link_libraries(example matrix ${HPX_LIBRARIES})
include_directories(${CMAKE_SOURCE_DIR}/lib)