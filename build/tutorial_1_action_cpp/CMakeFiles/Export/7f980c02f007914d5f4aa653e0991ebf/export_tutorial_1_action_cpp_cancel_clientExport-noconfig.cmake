#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tutorial_1_action_cpp::cancel_client" for configuration ""
set_property(TARGET tutorial_1_action_cpp::cancel_client APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tutorial_1_action_cpp::cancel_client PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcancel_client.so"
  IMPORTED_SONAME_NOCONFIG "libcancel_client.so"
  )

list(APPEND _cmake_import_check_targets tutorial_1_action_cpp::cancel_client )
list(APPEND _cmake_import_check_files_for_tutorial_1_action_cpp::cancel_client "${_IMPORT_PREFIX}/lib/libcancel_client.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
