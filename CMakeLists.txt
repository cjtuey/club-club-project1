cmake_minimum_required(VERSION 3.16)

project(ClubClubBar LANGUAGES CXX)

# Use modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

<<<<<<< HEAD
# --- Sources ---
set(SOURCES
    main.cpp
    ingredients.cpp
    ordering.cpp
    mixing.cpp
    payment.cpp
=======
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(ClubClubBar
  main.cpp
  include/ingredients.h
  include/ordering.h
  include/mixing.h
  include/payment.h
  ingredients.cpp
  ordering.cpp
  mixing.cpp
  payment.cpp
  util.cpp
  include/util.h
>>>>>>> eb2a83cd21f98e965afc07d96467b134a07b342e
)

set(HEADERS
    include/ingredients.h
    include/ordering.h
    include/mixing.h
    include/payment.h
)

# --- Executable ---
add_executable(ClubClubBar
    ${SOURCES}
    ${HEADERS}
)

# Add include directory
target_include_directories(ClubClubBar PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# --- Cross-platform install rules ---
include(GNUInstallDirs)
install(TARGETS ClubClubBar
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}   # Windows + Linux executables
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}   # shared libraries (Unix/macOS)
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}   # static libraries
)
