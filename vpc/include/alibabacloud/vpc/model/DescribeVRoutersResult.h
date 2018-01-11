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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVROUTERSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVROUTERSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVRoutersResult : public ServiceResult
			{
			public:
				struct VRouter
				{
					std::string vRouterId;
					std::string description;
					std::string vpcId;
					std::vector<std::string> routeTableIds;
					std::string creationTime;
					std::string regionId;
					std::string vRouterName;
				};


				DescribeVRoutersResult();
				explicit DescribeVRoutersResult(const std::string &payload);
				~DescribeVRoutersResult();
				std::vector<VRouter> getVRouters()const;
				void setVRouters(const std::vector<VRouter>& vRouters);
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VRouter> vRouters_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVROUTERSRESULT_H_