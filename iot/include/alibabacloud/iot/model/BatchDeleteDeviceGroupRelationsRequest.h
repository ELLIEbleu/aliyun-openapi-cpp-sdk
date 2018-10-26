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

#ifndef ALIBABACLOUD_IOT_MODEL_BATCHDELETEDEVICEGROUPRELATIONSREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_BATCHDELETEDEVICEGROUPRELATIONSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT BatchDeleteDeviceGroupRelationsRequest : public RpcServiceRequest
			{
				struct Device
				{
					std::string deviceName;
					std::string productKey;
				};

			public:
				BatchDeleteDeviceGroupRelationsRequest();
				~BatchDeleteDeviceGroupRelationsRequest();

				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::vector<Device> getDevice()const;
				void setDevice(const std::vector<Device>& device);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string groupId_;
				std::vector<Device> device_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_BATCHDELETEDEVICEGROUPRELATIONSREQUEST_H_