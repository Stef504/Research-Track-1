#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "assignment_1_rt2::client" for configuration ""
set_property(TARGET assignment_1_rt2::client APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(assignment_1_rt2::client PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libclient.so"
  IMPORTED_SONAME_NOCONFIG "libclient.so"
  )

list(APPEND _cmake_import_check_targets assignment_1_rt2::client )
list(APPEND _cmake_import_check_files_for_assignment_1_rt2::client "${_IMPORT_PREFIX}/lib/libclient.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
