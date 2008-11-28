# this one is important
SET(CMAKE_SYSTEM_NAME Windows)
set (CMAKE_SYSTEM_PROCESSOR i686)

# specify the cross compiler
SET(CMAKE_C_COMPILER   i686-mingw32-gcc)
set (WINDRES i686-mingw32-windres)
set (DLLTOOL i686-mingw32-dlltool)

# where is the target environment 
SET(CMAKE_FIND_ROOT_PATH  /usr/i686-mingw32/usr)

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)