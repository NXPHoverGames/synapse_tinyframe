if (CONFIG_SYNAPSE_TINYFRAME)

set(SYNAPSE_TINYFRAME_DIR ${ZEPHYR_CURRENT_MODULE_DIR})

zephyr_library_named(synapse_tinyframe)

zephyr_include_directories(
  ${SYNAPSE_TINYFRAME_DIR}/include
  ${SYNAPSE_TINYFRAME_DIR}/include/tinyframe
  ${CMAKE_CURRENT_BINARY_DIR}/..
  )

zephyr_library_sources(
  ${SYNAPSE_TINYFRAME_DIR}/src/TinyFrame.c
  ${SYNAPSE_TINYFRAME_DIR}/src/utils.c
)

endif()
