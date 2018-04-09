
set(PROJECT_NAME hello)
project(${PROJECT_NAME})


add_wast_executable(TARGET ${PROJECT_NAME}
  INCLUDE_FOLDERS include ${EOSIO_INSTALL_DIR}/include ${EOSIO_INSTALL_DIR}/include/libc++/upstream/include${EOSIO_INSTALL_DIR}/include/musl/upstream/include
  LIBRARIES ${EOSIO_CONTRACTSDK_PATH}/lib/libc++ ${EOSIO_CONTRACTSDK_PATH}/lib/libc ${EOSIO_CONTRACTSDK_PATH}/lib/eosiolib
  DESTINATION_FOLDER ${CMAKE_CURRENT_BINARY_DIR}
)

