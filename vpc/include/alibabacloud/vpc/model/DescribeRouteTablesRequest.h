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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/vpc/VpcRequest.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeRouteTablesRequest : public VpcRequest
			{

			public:
				DescribeRouteTablesRequest();
				~DescribeRouteTablesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getVRouterId()const;
				void setVRouterId(const std::string& vRouterId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getType()const;
				void setType(const std::string& type);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRouterType()const;
				void setRouterType(const std::string& routerType);
				std::string getRouteTableName()const;
				void setRouteTableName(const std::string& routeTableName);
				std::string getRouterId()const;
				void setRouterId(const std::string& routerId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getRouteTableId()const;
				void setRouteTableId(const std::string& routeTableId);

            private:
				long resourceOwnerId_;
				std::string vRouterId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string type_;
				int pageNumber_;
				std::string routerType_;
				std::string routeTableName_;
				std::string routerId_;
				int pageSize_;
				std::string routeTableId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEROUTETABLESREQUEST_H_