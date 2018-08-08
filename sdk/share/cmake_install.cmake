# Install script for directory: D:/ITE_Castor3_SDK/sdk/share

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/AF")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/audio_mgr/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/fat/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/freetype/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/iniparser/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/itc/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/itu/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/jpeg/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/png/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/pyinput/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/redblack/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/sdl/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/tslib/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/ucl/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/upgrade/cmake_install.cmake")
  include("D:/ITE_Castor3_SDK/build/win32/AF/sdk/share/zlib/cmake_install.cmake")

endif()

