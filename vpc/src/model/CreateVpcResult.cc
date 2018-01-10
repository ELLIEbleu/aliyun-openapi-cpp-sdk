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

#include <alibabacloud/vpc/model/CreateVpcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateVpcResult::CreateVpcResult() :
	ServiceResult()
{}

CreateVpcResult::CreateVpcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpcResult::~CreateVpcResult()
{}

void CreateVpcResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	vpcId_ = value["VpcId"].asString();
	vRouterId_ = value["VRouterId"].asString();
	routeTableId_ = value["RouteTableId"].asString();

}

std::string CreateVpcResult::getVRouterId()const
{
	return vRouterId_;
}

void CreateVpcResult::setVRouterId(const std::string& vRouterId)
{
	vRouterId_ = vRouterId;
}

std::string CreateVpcResult::getRouteTableId()const
{
	return routeTableId_;
}

void CreateVpcResult::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
}

std::string CreateVpcResult::getVpcId()const
{
	return vpcId_;
}

void CreateVpcResult::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
}

