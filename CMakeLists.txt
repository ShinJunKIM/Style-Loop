cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름과 버전 설정
project(StyleLoopEngine VERSION 1.0)

# C++ 표준 설정 (C++ 17 사용)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 실행 파일 생성 (이름: StyleLoopEngine, 소스: src/main.cpp)
add_executable(StyleLoopEngine src/main.cpp)