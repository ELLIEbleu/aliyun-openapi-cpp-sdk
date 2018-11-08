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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCERTIFICATELISTRESULT_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCERTIFICATELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnCertificateListResult : public ServiceResult
			{
			public:
				struct CertificateListModel
				{
					struct Cert
					{
						std::string fingerprint;
						std::string issuer;
						long certId;
						std::string certName;
						long lastTime;
						std::string common;
					};
					std::vector<Cert> certList;
					int count;
				};


				DescribeScdnCertificateListResult();
				explicit DescribeScdnCertificateListResult(const std::string &payload);
				~DescribeScdnCertificateListResult();
				CertificateListModel getCertificateListModel()const;

			protected:
				void parse(const std::string &payload);
			private:
				CertificateListModel certificateListModel_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNCERTIFICATELISTRESULT_H_