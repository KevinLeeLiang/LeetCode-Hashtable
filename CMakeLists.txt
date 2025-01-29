cmake_minimum_required(VERSION 3.17)
project(LeetCode_Hashtable)

set(CMAKE_CXX_STANDARD 14)
include_directories(util)
add_executable(LeetCode_Hashtable main.cpp L1_twoSum/twoSum.cpp L1_twoSum/twoSum.h util/util.h test_factory.h L3_lengthOfLongestSubstring/lengthOfLongestSubstring.cpp L3_lengthOfLongestSubstring/lengthOfLongestSubstring.h)