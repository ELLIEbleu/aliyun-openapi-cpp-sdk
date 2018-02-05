/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/slb/model/AddBackendServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

AddBackendServersResult::AddBackendServersResult() :
	ServiceResult()
{}

AddBackendServersResult::AddBackendServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddBackendServersResult::~AddBackendServersResult()
{}

void AddBackendServersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBackendServers = value["BackendServers"]["BackendServer"];
	for (auto value : allBackendServers)
	{
		BackendServer backendServersObject;
		if(!value["ServerId"].isNull())
			backendServersObject.serverId = value["ServerId"].asString();
		if(!value["Weight"].isNull())
			backendServersObject.weight = value["Weight"].asString();
		backendServers_.push_back(backendServersObject);
	}
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();

}

std::string AddBackendServersResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::vector<AddBackendServersResult::BackendServer> AddBackendServersResult::getBackendServers()const
{
	return backendServers_;
}

