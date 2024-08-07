# CMake 프로그램의 최소 버전
cmake_minimum_required(VERSION 3.11)

# 프로젝트 정보
project(
  dataStructure_test
  VERSION 0.1
  DESCRIPTION "예제 프로젝트"
  LANGUAGES C)


# 모든 C 소스 파일을 찾기
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/Source/*.c")

#라이브러리 추가
add_library(dataListLibrary STATIC ${SOURCES})  

#실행파일로 만듦
add_executable(program_exe_file ${CMAKE_CURRENT_SOURCE_DIR}/ListMain.c)

#include 디렉토리를 포함함
target_include_directories(dataListLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(program_exe_file PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# 라이브러리와 실행 파일 연결
target_link_libraries(program_exe_file PRIVATE dataListLibrary)