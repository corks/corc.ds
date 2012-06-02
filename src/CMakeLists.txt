file(GLOB SRCS *.c)
file(GLOB HDRS *.h)

add_library(caerus SHARED ${SRCS} ${HDRS})
add_subdirectory(test)
