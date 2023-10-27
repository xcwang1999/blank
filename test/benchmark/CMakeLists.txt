macro(add_benchmark target)
    file(GLOB_RECURSE srcs CONFIGURE_DEPENDS 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.c 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cu
    )
    enable_testing()
    add_executable(${target} 
        ${srcs}
    )
    target_include_directories(${target} SYSTEM PRIVATE
        # ${CUDAToolkit_INCLUDE_DIRS}
    )
    target_include_directories(${target} PRIVATE
        ${PROJECT_SOURCE_DIR}/include
    )
    target_link_libraries(${target} PRIVATE
        benchmark::benchmark
    )
endmacro()

add_subdirectory(hello)