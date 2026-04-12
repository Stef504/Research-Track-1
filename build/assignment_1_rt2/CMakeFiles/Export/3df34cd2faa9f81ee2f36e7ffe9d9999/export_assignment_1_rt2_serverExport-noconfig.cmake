#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "assignment_1_rt2::server" for configuration ""
set_property(TARGET assignment_1_rt2::server APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(assignment_1_rt2::server PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libserver.so"
  IMPORTED_SONAME_NOCONFIG "libserver.so"
  )

list(APPEND _cmake_import_check_targets assignment_1_rt2::server )
list(APPEND _cmake_import_check_files_for_assignment_1_rt2::server "${_IMPORT_PREFIX}/lib/libserver.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
