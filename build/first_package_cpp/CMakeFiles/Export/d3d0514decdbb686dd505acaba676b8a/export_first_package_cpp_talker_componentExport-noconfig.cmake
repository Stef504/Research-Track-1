#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "first_package_cpp::talker_component" for configuration ""
set_property(TARGET first_package_cpp::talker_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(first_package_cpp::talker_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtalker_component.so"
  IMPORTED_SONAME_NOCONFIG "libtalker_component.so"
  )

list(APPEND _cmake_import_check_targets first_package_cpp::talker_component )
list(APPEND _cmake_import_check_files_for_first_package_cpp::talker_component "${_IMPORT_PREFIX}/lib/libtalker_component.so" )

# Import target "first_package_cpp::talker_component2" for configuration ""
set_property(TARGET first_package_cpp::talker_component2 APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(first_package_cpp::talker_component2 PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtalker_component2.so"
  IMPORTED_SONAME_NOCONFIG "libtalker_component2.so"
  )

list(APPEND _cmake_import_check_targets first_package_cpp::talker_component2 )
list(APPEND _cmake_import_check_files_for_first_package_cpp::talker_component2 "${_IMPORT_PREFIX}/lib/libtalker_component2.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
