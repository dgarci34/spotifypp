set(INCLUDE_DIR
    ${PROJECT_SOURCE_DIR}/include
)

set(HDR_FILES
    ${INCLUDE_DIR}SpotifyClient.h
)

include_directories(
    ${INCLUDE_DIR}
)

set(SRC_FILES
    main.cpp
    SpotifyClient.cpp
)

add_executable(SPP
    ${HRD_FILES}
    ${SRC_FILES}
)

