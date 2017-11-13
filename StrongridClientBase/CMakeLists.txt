set (lib_StrongridClientBase_SRCS
./PdcClient.cpp
./TcpClient.cpp
)

set (lib_StrongridClientBase_HDRS
./PdcClient.h
./TcpClient.h
)

add_library(StrongridClientBase STATIC ${lib_StrongridClientBase_SRCS} ${lib_StrongridClientBase_HDRS})
