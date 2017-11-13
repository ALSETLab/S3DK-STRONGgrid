set (lib_StrongridBase_SRCS
./C37118DataTypes.cpp
./C37118Protocol.cpp
./Common.cpp
./EncDec.cpp
)

set (lib_StrongridBase_HDRS
./C37118Protocol.h
./common.h
./EncDec.h
)

add_library(StrongridBase STATIC ${lib_StrongridBase_SRCS} ${lib_StrongridBase_HDRS})
