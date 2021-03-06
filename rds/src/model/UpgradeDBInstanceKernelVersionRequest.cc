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

#include <alibabacloud/rds/model/UpgradeDBInstanceKernelVersionRequest.h>

using AlibabaCloud::Rds::Model::UpgradeDBInstanceKernelVersionRequest;

UpgradeDBInstanceKernelVersionRequest::UpgradeDBInstanceKernelVersionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "UpgradeDBInstanceKernelVersion")
{}

UpgradeDBInstanceKernelVersionRequest::~UpgradeDBInstanceKernelVersionRequest()
{}

std::string UpgradeDBInstanceKernelVersionRequest::getSwitchTimeMode()const
{
	return switchTimeMode_;
}

void UpgradeDBInstanceKernelVersionRequest::setSwitchTimeMode(const std::string& switchTimeMode)
{
	switchTimeMode_ = switchTimeMode;
	setParameter("SwitchTimeMode", switchTimeMode);
}

long UpgradeDBInstanceKernelVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeDBInstanceKernelVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpgradeDBInstanceKernelVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeDBInstanceKernelVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpgradeDBInstanceKernelVersionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void UpgradeDBInstanceKernelVersionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string UpgradeDBInstanceKernelVersionRequest::getSwitchTime()const
{
	return switchTime_;
}

void UpgradeDBInstanceKernelVersionRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setParameter("SwitchTime", switchTime);
}

long UpgradeDBInstanceKernelVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeDBInstanceKernelVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeDBInstanceKernelVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpgradeDBInstanceKernelVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

