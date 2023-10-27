set(EXAMPLE hello_world)
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cu
)
add_executable(${EXAMPLE}
    ${srcs}
)
target_include_directories(${EXAMPLE} PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
target_link_libraries(${EXAMPLE} PRIVATE
    mylibrary::hello
)