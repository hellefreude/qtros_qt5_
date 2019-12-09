cmake_minimum_required(VERSION 2.8.3)
project(qtros)

add_definitions(-std=c++11 -fPIC -Wall -Wextra)

##########
# CATKIN #
##########
#find_package(catkin_simple REQUIRED)
find_package(catkin_simple REQUIRED)

find_package(catkin REQUIRED COMPONENTS
robotis_math
ssoni_arm_module_msgs
robotis_controller_msgs
ssoni_perception_msgs
)

catkin_package()

catkin_simple(ALL_DEPS_REQUIRED)

##################
# QT ENVIRONMENT #
##################
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTOUIC ON)

# non-ROS:
find_package(Qt5 COMPONENTS Core Gui Widgets)

############
# SECTIONS #
############

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
file(GLOB QT_RESOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} resources/*.qrc)

QT5_ADD_RESOURCES(QT_RESOURCES_CPP ${QT_RESOURCES})
QT5_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})

include_directories(
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    )

###########
# SOURCES #
###########

set(QT_SOURCES
    src/main.cpp
    src/main_window.cpp
    src/qnode.cpp

    include/qtros/main_window.hpp
    include/qtros/qnode.hpp
    )

#############
# LIBRARIES #
#############

#cs_add_library(${PROJECT_NAME}
#
#        )

############
# BINARIES #
############
cs_add_executable(qtros ${QT_SOURCES} ${QT_RESOURCES_CPP} ${QT_FORMS_HPP} ${QT_MOC_HPP})
target_link_libraries(qtros
    Qt5::Core
    Qt5::Widgets
)

##########
# EXPORT #
##########
cs_install()
cs_export()
