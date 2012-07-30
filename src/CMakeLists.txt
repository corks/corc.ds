file(GLOB SRCS *.c)
file(GLOB HDRS *.h)

add_library(corc.ds SHARED ${SRCS} ${HDRS})
set_target_properties(corc.ds PROPERTIES VERSION 0.0.1 SOVERSION 0)

install(FILES ${HDRS} DESTINATION include/libcorc/ds)
install(TARGETS corc.ds
        DESTINATION lib
        PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ
                    GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)
