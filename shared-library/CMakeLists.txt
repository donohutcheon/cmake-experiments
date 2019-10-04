cmake_minimum_required (VERSION 3.10)
project (app)

IF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
	SET(CMAKE_INSTALL_PREFIX  ${CMAKE_BINARY_DIR}/build CACHE PATH "Install to build directory" FORCE)
ENDIF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set (EXTRA_LIBS ${EXTRA_LIBS} palindrome)

include_directories ("${PROJECT_SOURCE_DIR}/palindrome")

add_subdirectory (palindrome)

add_executable(app app.cpp)
target_link_libraries (app  ${EXTRA_LIBS})
