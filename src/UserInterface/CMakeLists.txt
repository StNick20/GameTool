# CMake Lists 

# This names our executable (and for VS our project). 
set(APP UserInterface) 

 

file(GLOB EXE_FILES *.cpp)

#IF (WIN32)
#	add_executable(${APP} WIN32 ${EXE_FILES})
#ELSE()
	add_executable(${APP} ${EXE_FILES})
#ENDIF()

# Make sure dependent projects are compiled first!
add_dependencies(${APP} FileHandling) # my target(s)
add_dependencies(${APP} Model)

# Link our libraries
target_link_libraries (${APP} LINK_PUBLIC Model)
target_link_libraries (${APP} LINK_PUBLIC FileHandling)


install(TARGETS ${APP}
	CONFIGURATIONS Release RelWithDebInfo Debug
	DESTINATION .
	)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/assets
	CONFIGURATIONS Release RelWithDebInfo Debug
	DESTINATION ./) 

message(STATUS "DONE!")