

add_library (myLib3
  # list of cpp source files:
  pid.cpp
  )

# Indicate what directories should be added to the include file search
# path when using this library.
target_include_directories(myLib3 PUBLIC
  # list of directories:
  .
  )
