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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeByteHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainRealTimeByteHitRateDataResult::DescribeScdnDomainRealTimeByteHitRateDataResult() :
	ServiceResult()
{}

DescribeScdnDomainRealTimeByteHitRateDataResult::DescribeScdnDomainRealTimeByteHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainRealTimeByteHitRateDataResult::~DescribeScdnDomainRealTimeByteHitRateDataResult()
{}

void DescribeScdnDomainRealTimeByteHitRateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["ByteHitRateDataModel"];
	for (auto value : allData)
	{
		ByteHitRateDataModel dataObject;
		if(!value["ByteHitRate"].isNull())
			dataObject.byteHitRate = std::stof(value["ByteHitRate"].asString());
		if(!value["TimeStamp"].isNull())
			dataObject.timeStamp = value["TimeStamp"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeScdnDomainRealTimeByteHitRateDataResult::ByteHitRateDataModel> DescribeScdnDomainRealTimeByteHitRateDataResult::getData()const
{
	return data_;
}

