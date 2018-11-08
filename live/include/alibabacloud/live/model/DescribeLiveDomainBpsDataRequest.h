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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEDOMAINBPSDATAREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEDOMAINBPSDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveDomainBpsDataRequest : public RpcServiceRequest
			{

			public:
				DescribeLiveDomainBpsDataRequest();
				~DescribeLiveDomainBpsDataRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getInterval()const;
				void setInterval(const std::string& interval);
				std::string getLocationNameEn()const;
				void setLocationNameEn(const std::string& locationNameEn);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getIspNameEn()const;
				void setIspNameEn(const std::string& ispNameEn);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string regionId_;
				std::string domainName_;
				std::string endTime_;
				std::string interval_;
				std::string locationNameEn_;
				std::string startTime_;
				std::string ispNameEn_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEDOMAINBPSDATAREQUEST_H_