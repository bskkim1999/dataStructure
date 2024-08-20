# CMake 프로그램의 최소 버전
cmake_minimum_required(VERSION 3.11)

# 프로젝트 정보
project(
  dataStructure_test
  VERSION 0.1
  DESCRIPTION "예제 프로젝트"
  LANGUAGES C)


#실행파일로 만듦
add_executable(program_exe_file ${CMAKE_CURRENT_SOURCE_DIR}/DLinkedRead.c)