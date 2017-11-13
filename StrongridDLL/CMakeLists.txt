set (lib_StrongridDLL_SRCS
./Mutex.cpp
./Strongrid.cpp
)

set (lib_StrongridDLL_HDRS
./Mutex.h
./Strongrid.h
)

add_library (StrongridDLL SHARED ${lib_StrongridDLL_SRCS} ${lib_StrongridDLL_HDRS})

target_link_libraries(StrongridDLL StrongridBase StrongridClientBase)

#if(WIN32)
  target_link_libraries(StrongridDLL ws2_32)
#endif()