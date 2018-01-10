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

#include <alibabacloud/vpc/model/ModifyCommonBandwidthPackagePayTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyCommonBandwidthPackagePayTypeResult::ModifyCommonBandwidthPackagePayTypeResult() :
	ServiceResult()
{}

ModifyCommonBandwidthPackagePayTypeResult::ModifyCommonBandwidthPackagePayTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyCommonBandwidthPackagePayTypeResult::~ModifyCommonBandwidthPackagePayTypeResult()
{}

void ModifyCommonBandwidthPackagePayTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	orderId_ = std::stol(value["OrderId"].asString());
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();

}

std::string ModifyCommonBandwidthPackagePayTypeResult::getMessage()const
{
	return message_;
}

void ModifyCommonBandwidthPackagePayTypeResult::setMessage(const std::string& message)
{
	message_ = message;
}

long ModifyCommonBandwidthPackagePayTypeResult::getOrderId()const
{
	return orderId_;
}

void ModifyCommonBandwidthPackagePayTypeResult::setOrderId(long orderId)
{
	orderId_ = orderId;
}

std::string ModifyCommonBandwidthPackagePayTypeResult::getCode()const
{
	return code_;
}

void ModifyCommonBandwidthPackagePayTypeResult::setCode(const std::string& code)
{
	code_ = code;
}

