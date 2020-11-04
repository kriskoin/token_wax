project(divitoken111)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( divitoken111 divitoken111 divitoken111.cpp )
target_include_directories( divitoken111 PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( divitoken111 ${CMAKE_SOURCE_DIR}/../ricardian )