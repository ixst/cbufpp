set(
    EXAMPLES
    example
)

foreach(example ${EXAMPLES})
  add_executable(${example} ${example}.cc)
  target_link_libraries(${example} cbufpp)
endforeach()
