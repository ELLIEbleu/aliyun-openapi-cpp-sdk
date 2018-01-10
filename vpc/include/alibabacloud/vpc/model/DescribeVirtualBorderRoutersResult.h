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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVIRTUALBORDERROUTERSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVIRTUALBORDERROUTERSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVirtualBorderRoutersResult : public ServiceResult
			{
			public:
				struct VirtualBorderRouterType
				{
					struct AssociatedPhysicalConnection
					{
						std::string localGatewayIp;
						std::string peerGatewayIp;
						std::string circuitCode;
						std::string physicalConnectionId;
						std::string vlanInterfaceId;
						std::string physicalConnectionStatus;
						std::string peeringSubnetMask;
						std::string physicalConnectionOwnerUid;
						std::string vlanId;
						std::string physicalConnectionBusinessStatus;
					};
					struct AssociatedCbn
					{
						long cbnOwnerUid;
						std::string cbnOwnerId;
						std::string cbnStatus;
					};
					std::string status;
					std::string peerGatewayIp;
					std::string routeTableId;
					std::string description;
					std::vector<VirtualBorderRouterType::AssociatedPhysicalConnection> associatedPhysicalConnections;
					std::string activationTime;
					std::string circuitCode;
					std::string physicalConnectionId;
					std::string vlanInterfaceId;
					std::string physicalConnectionStatus;
					std::string vbrId;
					std::string terminationTime;
					std::string peeringSubnetMask;
					std::string physicalConnectionOwnerUid;
					std::string recoveryTime;
					std::string name;
					std::vector<VirtualBorderRouterType::AssociatedCbn> associatedCbns;
					std::string localGatewayIp;
					std::string creationTime;
					std::string accessPointId;
					int vlanId;
					std::string physicalConnectionBusinessStatus;
				};


				DescribeVirtualBorderRoutersResult();
				explicit DescribeVirtualBorderRoutersResult(const std::string &payload);
				~DescribeVirtualBorderRoutersResult();
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<VirtualBorderRouterType> getVirtualBorderRouterSet()const;
				void setVirtualBorderRouterSet(const std::vector<VirtualBorderRouterType>& virtualBorderRouterSet);

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<VirtualBorderRouterType> virtualBorderRouterSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVIRTUALBORDERROUTERSRESULT_H_