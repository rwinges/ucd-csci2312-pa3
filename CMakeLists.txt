cmake_minimum_required(VERSION 3.3)
project(clustering)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ffloat-store")

set(SOURCE_FILES main.cpp
        Point.h
        Point.cpp
        Cluster.h
        Cluster.cpp
        ErrorContext.h
        ErrorContext.cpp
        ClusteringTests.h
        ClusteringTests.cpp
        KMeans.h
        KMeans.cpp
        Exceptions.h
        Exceptions.cpp)
add_executable(clustering ${SOURCE_FILES})