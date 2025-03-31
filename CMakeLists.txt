cmake_minimum_required(VERSION 3.30)
project(ASCII_Dress_to_Impress)

set(CMAKE_CXX_STANDARD 17)

# Include directories with correct case sensitivity
include_directories(Man)
include_directories(Man/Pants)
include_directories(Man/Pants/cargo)
include_directories(Man/Pants/dress)
include_directories(Man/Pants/jeans)
include_directories(Man/Pants/khakis)
include_directories(Man/Shirts)
include_directories(Man/Shirts/buttonDown)
include_directories(Man/Shirts/checkerboard)
include_directories(Man/Shirts/grayShirt)
include_directories(Man/Shirts/strippedShirt)
include_directories(Woman)
include_directories(Woman/dresses)
include_directories(Woman/dresses/RedDress)
include_directories(Woman/dresses/tightDress)
include_directories(Woman/fPants)
include_directories(Woman/fPants/blackJeans)
include_directories(Woman/fPants/jeanShorts)
include_directories(Woman/fPants/leggings)
include_directories(Woman/blouse)
include_directories(Woman/blouse/blueBlouse)
include_directories(Woman/blouse/pinkBlouse)
include_directories(Woman/femaleModel)

add_executable(ASCII_Dress_to_Impress
        # Male model files
        Man/maleModel/maleModel.cpp
        # Pants files
        Man/Pants/cargo/cargo.cpp
        Man/Pants/cargo/cargo.h
        Man/Pants/dress/dress.cpp
        Man/Pants/dress/dress.h
        Man/Pants/jeans/jeans.cpp
        Man/Pants/jeans/jeans.h
        Man/Pants/khakis/khakis.cpp
        Man/Pants/khakis/khakis.h
        Man/Pants/mPants.cpp
        Man/Pants/mPants.h
        # Shirts files
        Man/Shirts/buttonDown/buttonDown.cpp
        Man/Shirts/buttonDown/buttonDown.h
        Man/Shirts/checkerboard/checkerboard.cpp
        Man/Shirts/checkerboard/checkerboard.h
        Man/Shirts/grayShirt/grayShirt.cpp
        Man/Shirts/grayShirt/grayShirt.h
        Man/Shirts/strippedShirt/strippedShirt.cpp
        Man/Shirts/strippedShirt/strippedShirt.h
        Man/Shirts/mShirts.cpp
        Man/Shirts/mShirts.h
        Man/maleClothes.cpp
        Man/maleClothes.h
        # Women's dresses files
        Woman/dresses/dresses.cpp
        Woman/dresses/dresses.h
        Woman/dresses/redDress/redDress.cpp
        Woman/dresses/redDress/redDress.h
        Woman/dresses/tightDress/tightDress.cpp
        Woman/dresses/tightDress/tightDress.h
        # Female model
        Woman/femaleModel/femaleModel.cpp
        # Women's pants
        Woman/fPants/fPants.cpp
        Woman/fPants/fPants.h
        Woman/fPants/blackJeans/blackJeans.cpp
        Woman/fPants/blackJeans/blackJeans.h
        Woman/fPants/jeanShorts/jeanShorts.h
        Woman/fPants/jeanShorts/jeanShorts.cpp
        Woman/fPants/leggings/leggings.cpp
        Woman/fPants/leggings/leggings.h
        # Women's blouses
        Woman/blouse/blouse.cpp
        Woman/blouse/blouse.h
        Woman/blouse/blueBlouse/blueBlouse.cpp
        Woman/blouse/blueBlouse/blueBlouse.h
        Woman/blouse/pinkBlouse/pinkBlouse.cpp
        Woman/blouse/pinkBlouse/pinkBlouse.h
        # Female clothes
        Woman/femaleClothes.cpp
        Woman/femaleClothes.h
        main.cpp)

# Configure text files for copying
configure_file(Man/maleModel/man.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Man/Pants/cargo/cargoPants.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Man/Pants/dress/dressPants.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Man/Pants/jeans/jeans.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Man/Pants/khakis/khakis.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Man/Shirts/buttonDown/buttonDown.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Man/Shirts/checkerboard/checkerboard.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Man/Shirts/grayShirt/grayShirt.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Man/Shirts/strippedShirt/strippedShirt.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Woman/blouse/blueBlouse/blueBlouse.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Woman/blouse/pinkBlouse/pinkBlouse.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Woman/dresses/redDress/redDress.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Woman/dresses/tightDress/tightDress.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Woman/femaleModel/femaleModel.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Woman/fPants/blackJeans/blackJeans.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Woman/fPants/jeanShorts/jeanShorts.txt ${CMAKE_BINARY_DIR} COPYONLY)
configure_file(Woman/fPants/leggings/leggings.txt ${CMAKE_BINARY_DIR} COPYONLY)