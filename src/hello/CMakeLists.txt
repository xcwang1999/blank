set(SUB_LIBRARY hello)

add_sublibrary(${SUB_LIBRARY})

target_include_directories(${SUB_LIBRARY} PUBLIC
    ${PROJECT_SOURCE_DIR}/include
    # ${CUDAToolkit_INCLUDE_DIRS}
)