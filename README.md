# hello_petsc

```
cd with_cmake
mkdir build
cd build
cmake ..
```

My (Lukas) output:
```
-- The C compiler identification is GNU 4.9.2
-- The CXX compiler identification is GNU 4.9.2
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- The code is compiled with PETSc
-- PETSC_DIR or PETSC_INCLUDES are not specified, trying to run find_package(PETSc)
-- petsc_lib_dir /home/lukas/soft/petsc-3.7.0/arch-linux2-c-debug/lib
-- Recognized PETSc install with single library for all packages
-- Performing Test MULTIPASS_TEST_1_petsc_works_minimal
-- Performing Test MULTIPASS_TEST_1_petsc_works_minimal - Failed
-- Performing Test MULTIPASS_TEST_2_petsc_works_allincludes
-- Performing Test MULTIPASS_TEST_2_petsc_works_allincludes - Success
-- PETSc requires extra include paths, but links correctly with only interface libraries.  This is an unexpected configuration (but it seems to work fine).
-- Found PETSc: /home/lukas/soft/petsc-3.7.0/include;/home/lukas/soft/petsc-3.7.0/arch-linux2-c-debug/include;/usr/include/mpich  
-- PETSC_DIR = /home/lukas/soft/petsc-3.7.0
-- PETSC_ARCH = /home/lukas/soft/petsc-3.7.0
-- PETSC_INCLUDES = /home/lukas/soft/petsc-3.7.0/include;/home/lukas/soft/petsc-3.7.0/arch-linux2-c-debug/include;/usr/include/mpich
-- Configuring done
-- Generating done
-- Build files have been written to: /home/lukas/soft/test/hello_petsc/with_cmake/build
```

# install PETSc on my Ubuntu server:
(not tested yet)
```
sudo apt-get install gfortran
git clone -b maint https://bitbucket.org/petsc/petsc petsc
./configure --with-cc=gcc --with-cxx=g++ --with-fc=gfortran --download-mpich --download-fblaslapack --with-cuda=1 --download-cusp=1 --with-precision=double
```
PETSC_DIR, PETSC_ARCH? 

