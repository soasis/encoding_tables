# =============================================================================
#
# ztd.encoding_tables
# Copyright © JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
# Contact: opensource@soasis.org
#
# Commercial License Usage
# Licensees holding valid commercial ztd.encoding_tables licenses may use this file in
# accordance with the commercial license agreement provided with the
# Software or, alternatively, in accordance with the terms contained in
# a written agreement between you and Shepherd's Oasis, LLC.
# For licensing terms and conditions see your agreement. For
# further information contact opensource@soasis.org.
#
# Apache License Version 2 Usage
# Alternatively, this file may be used under the terms of Apache License
# Version 2.0 (the "License") for non-commercial use; you may not use this
# file except in compliance with the License. You may obtain a copy of the
# License at
#
# https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# ============================================================================ #

cmake_minimum_required(VERSION 3.31.0)

# # Project kickstart
# Includes a bunch of basic flags and utilities shared across projects
# See more at the github repository link below
include(FetchContent)
FetchContent_Declare(ztd.cmake
	GIT_REPOSITORY https://github.com/soasis/cmake.git
	GIT_TAG main)
FetchContent_MakeAvailable(ztd.cmake)
set(CMAKE_PROJECT_INCLUDE ${ZTD_CMAKE_PROJECT_PRELUDE})

# # Project declaration
# informs about the project, gives a description, version and MOST IMPORTANTLY
# the languages the project is going to use. Required.
project(ztd.encoding_tables
	VERSION 0.0.0
	DESCRIPTION "The Encoding Tables base library which contains many of the lookup tables and algorithms for mapping code points to indices and back for a myriad of encodings found in C and C++-driven software and hardware."
	HOMEPAGE_URL "https://ztdencoding_tables.rtfd.io/"
	LANGUAGES CXX C)

if(ZTD_ENCODING_TABLES_READTHEDOCS)
	# ReadTheDocs seems unable to handle the include at the project level: something must be going wrong?
	include(CheckCXXCompilerFlag)
	include(CheckCCompilerFlag)
	include(CheckIPOSupported)
	include(CMakePackageConfigHelpers)
	include(CMakeDependentOption)
	include(CMakePrintHelpers)
	include(GNUInstallDirs)
	include(FeatureSummary)
	include(FetchContent)
	include(CTest)
endif()

# # # Top-Level Directories
# Check if this is the top-level project or not
if(CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR)
	set(ZTD_ENCODING_TABLES_IS_TOP_LEVEL_PROJECT YES)
else()
	set(ZTD_ENCODING_TABLES_IS_TOP_LEVEL_PROJECT NO)
endif()

# # Options
option(ZTD_ENCODING_TABLES_CI "Whether or not we are in continuous integration mode" OFF)
option(ZTD_ENCODING_TABLES_READTHEDOCS "Whether or not we are building inside of ReadTheDocs" OFF)
option(ZTD_ENCODING_TABLES_TESTS "Enable build of tests" OFF)
option(ZTD_ENCODING_TABLES_DOCUMENTATION "Enable build of documentation" OFF)
option(ZTD_ENCODING_TABLES_DOCUMENTATION_NO_SPHINX "Turn off Sphinx usage (useful for ReadTheDocs builds)" OFF)
option(ZTD_ENCODING_TABLES_GENERATE_SINGLE "Enable generation of a single header and its target" OFF)

# Modify bad flags / change defaults if we are the top level
if(ZTD_ENCODING_TABLES_IS_TOP_LEVEL_PROJECT)
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/lib")
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")

	if(NOT DEFINED CMAKE_CXX_STANDARD)
		set(CMAKE_CXX_STANDARD 17)
	endif()

	if(NOT DEFINED CMAKE_C_STANDARD)
		set(CMAKE_C_STANDARD 11)
	endif()

	if(ZTD_ENCODING_TABLES_BENCHMARKS OR ZTD_ENCODING_TABLES_EXAMPLES OR ZTD_ENCODING_TABLES_TESTS OR ZTD_ENCODING_TABLES_SCRATCH)
		# normal flags
		check_compiler_flag(disable-permissive MSVC /permissive- GCC -pedantic)
		check_compiler_flag(disable-aliasing GCC -fno-strict-aliasing)

		# Warning flags
		check_compiler_flag(warn-pedantic MSVC /permissive- GCC -pedantic)
		check_compiler_flag(warn-all MSVC /W4 GCC -Wall)
		check_compiler_flag(warn-errors MSVC /WX GCC -Werror)
		check_compiler_flag(warn-extra GCC -Wextra Clang -Wextra)
		check_compiler_flag(utf8-literal-encoding MSVC /execution-charset:utf-8 GCC -fexec-charset=utf-8)
		check_compiler_flag(utf8-source-encoding MSVC /source-charset:utf-8 GCC -finput-charset=utf-8)
		check_compiler_flag(extra-constexpr-depth MSVC /constexpr:depth2147483647 GCC -fconstexpr-depth=2147483647 Clang -fconstexpr-depth=2147483647)
		check_compiler_flag(extra-constexpr-steps MSVC /constexpr:steps2147483647 GCC -fconstexpr-ops-limit=2147483647 Clang -fconstexpr-steps=2147483647)
		check_compiler_flag(template-debugging-mode GCC -ftemplate-backtrace-limit=0)
		check_compiler_diagnostic(microsoft-enum-value)
		check_compiler_diagnostic(gnu-zero-variadic-macro-arguments)
		check_compiler_diagnostic(type-limits)
	endif()
endif()

# # Main Dependency
FetchContent_Declare(ztd.idk
	GIT_REPOSITORY https://github.com/soasis/idk.git
	GIT_TAG main)
FetchContent_MakeAvailable(ztd.idk)

# # Main library declarations
# ztd.encoding_tables
file(GLOB_RECURSE ztd.encoding_tables.includes
	CONFIGURE_DEPENDS
	include/ztd/encoding_tables**.hpp
	include/ztd/encoding_tables**.h
)
file(GLOB_RECURSE ztd.encoding_tables.sources
	CONFIGURE_DEPENDS
	source/**.cpp
	source/**.c
)

add_library(ztd.encoding_tables ${ztd.encoding_tables.sources})
add_library(ztd::encoding_tables ALIAS ztd.encoding_tables)
target_include_directories(ztd.encoding_tables
	PUBLIC
	$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
	PRIVATE
	$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/source/include>
)
target_link_libraries(ztd.encoding_tables
	PUBLIC
	ztd::idk
)
target_compile_definitions(ztd.encoding_tables
	PRIVATE
		ZTD_ENCODING_TABLES_BUILD=1
	PUBLIC
		$<$<STREQUAL:$<TARGET_PROPERTY:ztd.encoding_tables,TYPE>,SHARED_LIBRARY>:ZTD_ENCODING_TABLES_DLL=1>
		${CMAKE_DL_LIBS}
)

if(ZTD_ENCODING_TABLES_IS_TOP_LEVEL_PROJECT)
	target_compile_options(ztd.encoding_tables
		PRIVATE
		${--utf8-literal-encoding}
		${--utf8-source-encoding}
		${--disable-permissive}
		${--warn-pedantic}
		${--warn-default}
		${--warn-extra}
		${--warn-errors}
	)
endif()
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU" AND NOT CMAKE_CXX_COMPILER_VERSION VERSION_LESS 7.0 AND NOT CMAKE_CXX_COMPILER_VERSION VERSION_GREATER 14.0)
	# this stuff is, unfortunately, really poisonous and poorly implemented
	# in these GCC versions
	# (Wstringop-overflow) - [meta-bug] bogus/missing -Wstringop-overflow warnings
	#   https://gcc.gnu.org/bugzilla/show_bug.cgi?id=88443
	# Bogus -Wstringop-overflow warning
	#   https://gcc.gnu.org/bugzilla/show_bug.cgi?id=100395
	# [10 Regression] spurious -Wstringop-overflow writing to a trailing array plus offset
	#   https://gcc.gnu.org/bugzilla/show_bug.cgi?id=95353
	target_compile_options(ztd.encoding_tables
		PUBLIC
		-Wstringop-overflow
		-Wstringop-overread
		-Warray-bounds
endif()


install(TARGETS ztd.encoding_tables)
install(DIRECTORY include/
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

configure_package_config_file(
	cmake/ztd.encoding_tables-config.cmake.in
	"${CMAKE_CURRENT_BINARY_DIR}/cmake/ztd.encoding_tables/ztd.encoding_tables-config.cmake"
	INSTALL_DESTINATION lib/cmake/ztd.encoding_tables
	NO_CHECK_REQUIRED_COMPONENTS_MACRO
)
write_basic_package_version_file(
	"${CMAKE_CURRENT_BINARY_DIR}/cmake/ztd.encoding_tables/ztd.encoding_tables-config-version.cmake"
	COMPATIBILITY SameMajorVersion
)
export(TARGETS ztd.encoding_tables
	FILE
	"${CMAKE_CURRENT_BINARY_DIR}/cmake/ztd.encoding_tables/ztd.encoding_tables-targets.cmake"
)

install(
	DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/cmake"
	TYPE DATA
)

if(ZTD_ENCODING_TABLES_GENERATE_SINGLE)
	add_subdirectory(single)
endif()

# # Benchmarks, Tests, Examples and Documentation
if(ZTD_ENCODING_TABLES_TESTS)
	include(CTest)
	add_subdirectory(tests)
endif()

if(ZTD_ENCODING_TABLES_DOCUMENTATION)
	add_subdirectory(documentation)
endif()

# For quick debugging and development only: don't peek! 🙈
mark_as_advanced(ZTD_ENCODING_TABLES_SCRATCH)

if(ZTD_ENCODING_TABLES_SCRATCH)
	add_executable(scratch main.cpp)
	target_link_libraries(scratch PRIVATE ztd::encoding_tables)
	target_compile_options(scratch
		PRIVATE
		${--template-debugging-mode}
		${--disable-permissive}
		${--warn-pedantic}
		${--warn-all}
		${--warn-extra}
		${--warn-errors})
endif()
