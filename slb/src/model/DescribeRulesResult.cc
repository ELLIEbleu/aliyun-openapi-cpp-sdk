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

#include <alibabacloud/slb/model/DescribeRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeRulesResult::DescribeRulesResult() :
	ServiceResult()
{}

DescribeRulesResult::DescribeRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRulesResult::~DescribeRulesResult()
{}

void DescribeRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRules = value["Rules"]["Rule"];
	for (auto value : allRules)
	{
		Rule rulesObject;
		if(!value["RuleId"].isNull())
			rulesObject.ruleId = value["RuleId"].asString();
		if(!value["RuleName"].isNull())
			rulesObject.ruleName = value["RuleName"].asString();
		if(!value["Domain"].isNull())
			rulesObject.domain = value["Domain"].asString();
		if(!value["Url"].isNull())
			rulesObject.url = value["Url"].asString();
		if(!value["VServerGroupId"].isNull())
			rulesObject.vServerGroupId = value["VServerGroupId"].asString();
		rules_.push_back(rulesObject);
	}

}

std::vector<DescribeRulesResult::Rule> DescribeRulesResult::getRules()const
{
	return rules_;
}

