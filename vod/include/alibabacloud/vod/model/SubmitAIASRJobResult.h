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

#ifndef ALIBABACLOUD_VOD_MODEL_SUBMITAIASRJOBRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_SUBMITAIASRJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT SubmitAIASRJobResult : public ServiceResult
			{
			public:
				struct AIASRJob
				{
					std::string status;
					std::string mediaId;
					std::string message;
					std::string creationTime;
					std::string data;
					std::string code;
					std::string jobId;
				};


				SubmitAIASRJobResult();
				explicit SubmitAIASRJobResult(const std::string &payload);
				~SubmitAIASRJobResult();
				AIASRJob getAIASRJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				AIASRJob aIASRJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SUBMITAIASRJOBRESULT_H_