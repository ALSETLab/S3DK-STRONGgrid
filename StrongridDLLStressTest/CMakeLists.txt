set (app_StrongridDLLStressTest_SRCS
./Common.h
./main.cpp
)

add_executable (StrongridDLLStressTest ${app_StrongridDLLStressTest_SRCS})

target_link_libraries (StrongridDLLStressTest  StrongridDLL)
