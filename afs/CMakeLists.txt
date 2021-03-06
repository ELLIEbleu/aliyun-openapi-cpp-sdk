#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(afs_public_header 
	include/alibabacloud/afs/AfsClient.h
	include/alibabacloud/afs/AfsExport.h )

set(afs_public_header_model 
	include/alibabacloud/afs/model/DescribeEarlyWarningRequest.h
	include/alibabacloud/afs/model/DescribeEarlyWarningResult.h
	include/alibabacloud/afs/model/SetEarlyWarningRequest.h
	include/alibabacloud/afs/model/SetEarlyWarningResult.h
	include/alibabacloud/afs/model/DescribeCaptchaIpCityRequest.h
	include/alibabacloud/afs/model/DescribeCaptchaIpCityResult.h
	include/alibabacloud/afs/model/ConfigurationStyleRequest.h
	include/alibabacloud/afs/model/ConfigurationStyleResult.h
	include/alibabacloud/afs/model/DescribeCaptchaMinRequest.h
	include/alibabacloud/afs/model/DescribeCaptchaMinResult.h
	include/alibabacloud/afs/model/DescribeCaptchaRiskRequest.h
	include/alibabacloud/afs/model/DescribeCaptchaRiskResult.h
	include/alibabacloud/afs/model/AuthenticateSigRequest.h
	include/alibabacloud/afs/model/AuthenticateSigResult.h
	include/alibabacloud/afs/model/DescribeConfigNameRequest.h
	include/alibabacloud/afs/model/DescribeConfigNameResult.h
	include/alibabacloud/afs/model/DescribeCaptchaDayRequest.h
	include/alibabacloud/afs/model/DescribeCaptchaDayResult.h
	include/alibabacloud/afs/model/DescribePersonMachineListRequest.h
	include/alibabacloud/afs/model/DescribePersonMachineListResult.h
	include/alibabacloud/afs/model/CreateConfigurationRequest.h
	include/alibabacloud/afs/model/CreateConfigurationResult.h
	include/alibabacloud/afs/model/AnalyzeNvcRequest.h
	include/alibabacloud/afs/model/AnalyzeNvcResult.h )

set(afs_src 
	src/AfsClient.cc
	src/model/DescribeEarlyWarningRequest.cc
	src/model/DescribeEarlyWarningResult.cc
	src/model/SetEarlyWarningRequest.cc
	src/model/SetEarlyWarningResult.cc
	src/model/DescribeCaptchaIpCityRequest.cc
	src/model/DescribeCaptchaIpCityResult.cc
	src/model/ConfigurationStyleRequest.cc
	src/model/ConfigurationStyleResult.cc
	src/model/DescribeCaptchaMinRequest.cc
	src/model/DescribeCaptchaMinResult.cc
	src/model/DescribeCaptchaRiskRequest.cc
	src/model/DescribeCaptchaRiskResult.cc
	src/model/AuthenticateSigRequest.cc
	src/model/AuthenticateSigResult.cc
	src/model/DescribeConfigNameRequest.cc
	src/model/DescribeConfigNameResult.cc
	src/model/DescribeCaptchaDayRequest.cc
	src/model/DescribeCaptchaDayResult.cc
	src/model/DescribePersonMachineListRequest.cc
	src/model/DescribePersonMachineListResult.cc
	src/model/CreateConfigurationRequest.cc
	src/model/CreateConfigurationResult.cc
	src/model/AnalyzeNvcRequest.cc
	src/model/AnalyzeNvcResult.cc )

add_library(afs ${LIB_TYPE}
	${afs_public_header}
	${afs_public_header_model}
	${afs_src})

set_target_properties(afs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}afs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(afs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AFS_LIBRARY)
endif()

target_include_directories(afs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(afs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(afs
		jsoncpp)
	target_include_directories(afs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(afs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(afs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(afs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(afs
		jsoncpp)
endif()

install(FILES ${afs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/afs)
install(FILES ${afs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/afs/model)
install(TARGETS afs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)