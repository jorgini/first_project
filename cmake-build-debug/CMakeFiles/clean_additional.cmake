# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appl_qt6_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appl_qt6_autogen.dir\\ParseCache.txt"
  "appl_qt6_autogen"
  )
endif()
