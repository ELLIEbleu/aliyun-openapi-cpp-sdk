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

#include <alibabacloud/vpc/model/ModifyCustomerGatewayAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyCustomerGatewayAttributeResult::ModifyCustomerGatewayAttributeResult() :
	ServiceResult()
{}

ModifyCustomerGatewayAttributeResult::ModifyCustomerGatewayAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyCustomerGatewayAttributeResult::~ModifyCustomerGatewayAttributeResult()
{}

void ModifyCustomerGatewayAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	customerGatewayId_ = value["CustomerGatewayId"].asString();
	ipAddress_ = value["IpAddress"].asString();
	name_ = value["Name"].asString();
	description_ = value["Description"].asString();
	createTime_ = std::stol(value["CreateTime"].asString());

}

std::string ModifyCustomerGatewayAttributeResult::getDescription()const
{
	return description_;
}

void ModifyCustomerGatewayAttributeResult::setDescription(const std::string& description)
{
	description_ = description;
}

std::string ModifyCustomerGatewayAttributeResult::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

void ModifyCustomerGatewayAttributeResult::setCustomerGatewayId(const std::string& customerGatewayId)
{
	customerGatewayId_ = customerGatewayId;
}

long ModifyCustomerGatewayAttributeResult::getCreateTime()const
{
	return createTime_;
}

void ModifyCustomerGatewayAttributeResult::setCreateTime(long createTime)
{
	createTime_ = createTime;
}

std::string ModifyCustomerGatewayAttributeResult::getIpAddress()const
{
	return ipAddress_;
}

void ModifyCustomerGatewayAttributeResult::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
}

std::string ModifyCustomerGatewayAttributeResult::getName()const
{
	return name_;
}

void ModifyCustomerGatewayAttributeResult::setName(const std::string& name)
{
	name_ = name;
}

