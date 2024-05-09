# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SSIS_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SSIS_autogen.dir\\ParseCache.txt"
  "SSIS_autogen"
  )
endif()
