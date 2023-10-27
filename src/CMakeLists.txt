set(MAIN_LIBRARY mylibrary)

set(MY_LIBRARIES "")

macro(add_sublibrary SUBLIBRARY)
    file(GLOB_RECURSE srcs CONFIGURE_DEPENDS 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.c 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cu
    )
    add_library(${SUBLIBRARY} STATIC
        ${srcs}
    )
    add_library(${MAIN_LIBRARY}::${SUBLIBRARY} ALIAS ${SUBLIBRARY})
    list(APPEND MY_LIBRARIES ${SUBLIBRARY})
    set(MY_LIBRARIES "${MY_LIBRARIES}" PARENT_SCOPE)
endmacro()

add_subdirectory(hello)

add_library(${MAIN_LIBRARY} INTERFACE)
message(STATUS "MY_LIBRARIES: ${MY_LIBRARIES}")
target_link_libraries(${MAIN_LIBRARY} INTERFACE
    ${MY_LIBRARIES}
)