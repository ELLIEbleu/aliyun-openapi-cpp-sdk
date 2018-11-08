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

#include <alibabacloud/domain/model/CheckDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

CheckDomainResult::CheckDomainResult() :
	ServiceResult()
{}

CheckDomainResult::CheckDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckDomainResult::~CheckDomainResult()
{}

void CheckDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["Avail"].isNull())
		avail_ = value["Avail"].asString();
	if(!value["Premium"].isNull())
		premium_ = value["Premium"].asString();
	if(!value["Reason"].isNull())
		reason_ = value["Reason"].asString();
	if(!value["Price"].isNull())
		price_ = std::stol(value["Price"].asString());

}

std::string CheckDomainResult::getAvail()const
{
	return avail_;
}

std::string CheckDomainResult::getDomainName()const
{
	return domainName_;
}

long CheckDomainResult::getPrice()const
{
	return price_;
}

std::string CheckDomainResult::getPremium()const
{
	return premium_;
}

std::string CheckDomainResult::getReason()const
{
	return reason_;
}

