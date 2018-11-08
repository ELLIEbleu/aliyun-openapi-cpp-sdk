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

#ifndef ALIBABACLOUD_JARVIS_MODEL_CREATECPMCPUNISHFEEDBACKREQUEST_H_
#define ALIBABACLOUD_JARVIS_MODEL_CREATECPMCPUNISHFEEDBACKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/jarvis/JarvisExport.h>

namespace AlibabaCloud
{
	namespace Jarvis
	{
		namespace Model
		{
			class ALIBABACLOUD_JARVIS_EXPORT CreateCpmcPunishFeedBackRequest : public RpcServiceRequest
			{

			public:
				CreateCpmcPunishFeedBackRequest();
				~CreateCpmcPunishFeedBackRequest();

				int getFeedBack()const;
				void setFeedBack(int feedBack);
				std::string getSrcIP()const;
				void setSrcIP(const std::string& srcIP);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getDstPort()const;
				void setDstPort(int dstPort);
				std::string getProtocolName()const;
				void setProtocolName(const std::string& protocolName);
				int getSrcPort()const;
				void setSrcPort(int srcPort);
				std::string getPunishType()const;
				void setPunishType(const std::string& punishType);
				std::string getGmtCreate()const;
				void setGmtCreate(const std::string& gmtCreate);
				std::string getDstIP()const;
				void setDstIP(const std::string& dstIP);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getSourceCode()const;
				void setSourceCode(const std::string& sourceCode);

            private:
				int feedBack_;
				std::string srcIP_;
				std::string sourceIp_;
				int dstPort_;
				std::string protocolName_;
				int srcPort_;
				std::string punishType_;
				std::string gmtCreate_;
				std::string dstIP_;
				std::string lang_;
				std::string sourceCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_JARVIS_MODEL_CREATECPMCPUNISHFEEDBACKREQUEST_H_