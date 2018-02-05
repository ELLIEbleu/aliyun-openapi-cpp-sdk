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

#ifndef ALIBABACLOUD_SLB_MODEL_UPLOADSERVERCERTIFICATERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_UPLOADSERVERCERTIFICATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT UploadServerCertificateResult : public ServiceResult
			{
			public:


				UploadServerCertificateResult();
				explicit UploadServerCertificateResult(const std::string &payload);
				~UploadServerCertificateResult();
				std::string getRegionIdAlias()const;
				std::string getFingerprint()const;
				std::string getAliCloudCertificateName()const;
				std::string getResourceGroupId()const;
				int getIsAliCloudCertificate()const;
				std::string getCreateTime()const;
				std::string getServerCertificateId()const;
				std::string getServerCertificateName()const;
				std::string getRegionId()const;
				long getCreateTimeStamp()const;
				std::string getAliCloudCertificateId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string regionIdAlias_;
				std::string fingerprint_;
				std::string aliCloudCertificateName_;
				std::string resourceGroupId_;
				int isAliCloudCertificate_;
				std::string createTime_;
				std::string serverCertificateId_;
				std::string serverCertificateName_;
				std::string regionId_;
				long createTimeStamp_;
				std::string aliCloudCertificateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_UPLOADSERVERCERTIFICATERESULT_H_