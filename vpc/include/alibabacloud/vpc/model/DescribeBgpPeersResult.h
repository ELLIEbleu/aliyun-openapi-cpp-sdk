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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPPEERSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPPEERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeBgpPeersResult : public ServiceResult
			{
			public:
				struct BgpPeer
				{
					std::string status;
					std::string description;
					std::string peerIpAddress;
					std::string keepalive;
					std::string routerId;
					std::string peerAsn;
					std::string name;
					std::string bgpPeerId;
					std::string localAsn;
					std::string bgpStatus;
					std::string authKey;
					std::string isFake;
					std::string routeLimit;
					std::string regionId;
					std::string hold;
					std::string bgpGroupId;
				};


				DescribeBgpPeersResult();
				explicit DescribeBgpPeersResult(const std::string &payload);
				~DescribeBgpPeersResult();
				std::vector<BgpPeer> getBgpPeers()const;
				void setBgpPeers(const std::vector<BgpPeer>& bgpPeers);
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<BgpPeer> bgpPeers_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPPEERSRESULT_H_