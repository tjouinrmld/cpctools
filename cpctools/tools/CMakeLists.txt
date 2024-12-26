add_subdirectory (AFT2)
add_subdirectory(cpcfs)
#add_subdirectory(cpcVideo)
add_subdirectory(damsConverter)
add_subdirectory(dataLinker)

add_executable(cpcDSK cpcDSK.cpp)
copy_dlls (cpcDSK)
target_link_libraries (cpcDSK cpc tools)

add_executable (createSnapshot createSnapshot.cpp)
copy_dlls (createSnapshot)
target_link_libraries (createSnapshot cpc tools)

add_executable (dataDBGenerator dataDBGenerator.cpp)
copy_dlls (dataDBGenerator)
target_link_libraries (dataDBGenerator tools)

install(TARGETS cpcDSK createSnapshot dataDBGenerator RUNTIME DESTINATION bin)
