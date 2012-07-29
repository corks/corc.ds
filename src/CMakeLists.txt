file(GLOB SRCS *.c)
file(GLOB HDRS *.h)

add_library(corc.ds SHARED ${SRCS} ${HDRS})
