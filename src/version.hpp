#ifndef FILE_IO_HANDLER_VERSION_HPP
#define FILE_IO_HANDLER_VERSION_HPP

#define FIOH_VERSION_MAJOR 0
#define FIOH_VERSION_MINOR 1
#define FIOH_VERSION_REVISION 0
#define FIOH_VERSION_STATUS "beta"

// Convert X to string
#define STR_PRE(X) #X
// Intermediate step to get the content of the macro
// and not the macro name itself
#define STR(X) STR_PRE(X)

#define FIOH_VERSION_PLAIN \
  STR(FIOH_VERSION_MAJOR)  \
  "." STR(FIOH_VERSION_MINOR) "." STR(FIOH_VERSION_REVISION)

#endif