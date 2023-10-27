macro(add_unit_test target)
    file(GLOB_RECURSE srcs CONFIGURE_DEPENDS
        ${ARGN}
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
        mylibrary::hello
        GTest::gtest_main
    )
endmacro()

include(GoogleTest)

add_subdirectory(hello)
