project(oop_exercise_01)

include_directories(include)

add_library(complex STATIC
  src/Complex.cpp
  )

add_executable(main
  src/main.cpp
  )

target_link_libraries(main complex)
  
