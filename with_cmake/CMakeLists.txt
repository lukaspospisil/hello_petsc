project(HELLO_PETSC)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# CMAKE: include cmake functions
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/" ${CMAKE_MODULE_PATH})

# yes, this code will be surely compiled with petsc
message(STATUS "The code is compiled with PETSc")
	
# PETSc: defined paths in ENV?
if(NOT DEFINED ENV{PETSC_DIR} OR NOT DEFINED ENV{PETSC_INCLUDES})
	message(STATUS "PETSC_DIR or PETSC_INCLUDES are not specified, trying to run find_package(PETSc)")

	# magic function from Jed Brown
	find_package(PETSc)
endif()

# give info about paths
message(STATUS "PETSC_DIR = $ENV{PETSC_DIR}")
message(STATUS "PETSC_ARCH = $ENV{PETSC_DIR}")
message(STATUS "PETSC_INCLUDES = ${PETSC_INCLUDES}")

# PETSc: include petsc stuff
include_directories(${PETSC_INCLUDES})

# add test files
ADD_EXECUTABLE(hellopetsc hellopetsc.c)
TARGET_LINK_LIBRARIES(hellopetsc ${PETSC_LIBRARIES})

