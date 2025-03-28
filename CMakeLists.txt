cmake_minimum_required(VERSION 3.30)
project(ASCII_Dress_to_Impress)

set(CMAKE_CXX_STANDARD 14)

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
include_directories(Woman/dresses/RedDress)
include_directories(Woman/dresses/tightDress)
include_directories(Woman/fPants/blackJeans)
include_directories(Woman/fPants/jeanShorts)
include_directories(Woman/fPants/leggings)
include_directories(Woman/Blouse/blueBlouse)
include_directories(Woman/Blouse/pinkBlouse)

add_executable(ASCII_Dress_to_Impress
        Man/MaleModel/maleModel.cpp
        Man/maleModel/man.txt
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
        Woman/dresses/RedDress/redDress.cpp
        Woman/dresses/RedDress/redDress.h
        Woman/dresses/tightDress/tightDress.cpp
        Woman/dresses/tightDress/tightDress.h
        Woman/FemaleModel/femaleModel.cpp
        Woman/fPants/blackJeans/BlackJeans.cpp
        Woman/fPants/blackJeans/BlackJeans.h
        Woman/fPants/jeanShorts/JeanShorts.h
        Woman/fPants/jeanShorts/jeanShorts.cpp
        Woman/fPants/leggings/leggings.cpp
        Woman/fPants/leggings/leggings.h
        Woman/Blouse/blueBlouse/blueBlouse.cpp
        Woman/Blouse/blueBlouse/blueBlouse.h
        Woman/Blouse/pinkBlouse/pinkBlouse.cpp
        Woman/Blouse/pinkBlouse/pinkBlouse.h
        Woman/FemaleClothes.h
    main.cpp)
configure_file(man/maleModel/man.txt ${CMAKE_BINARY_DIR} COPYONLY)
