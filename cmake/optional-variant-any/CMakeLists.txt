project(optional-variant-any)

set(SOURCE_LIST
        ../../src/optional-variant-any/main.cpp
        )

add_executable(optional-variant-any ${SOURCE_LIST})

target_link_libraries(optional-variant-any stdc++fs)