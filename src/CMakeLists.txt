file(GLOB SRCS *.c)
file(GLOB HDRS *.h)

add_library(cork.ds SHARED ${SRCS} ${HDRS})
