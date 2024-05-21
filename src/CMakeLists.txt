
cmake_minimum_required (VERSION 3.24)


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (PageTitle  "main.cpp ""page_title.cpp"" ${MY_INCLUDE_DIR}/page_title.h")
target_include_directories(PageTitle PUBLIC ${MY_INCLUDE_DIR})
