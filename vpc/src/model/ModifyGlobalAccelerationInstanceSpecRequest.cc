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

#include <alibabacloud/vpc/model/ModifyGlobalAccelerationInstanceSpecRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyGlobalAccelerationInstanceSpecRequest::ModifyGlobalAccelerationInstanceSpecRequest() :
	VpcRequest("ModifyGlobalAccelerationInstanceSpec")
{}

ModifyGlobalAccelerationInstanceSpecRequest::~ModifyGlobalAccelerationInstanceSpecRequest()
{}

long ModifyGlobalAccelerationInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyGlobalAccelerationInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyGlobalAccelerationInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyGlobalAccelerationInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyGlobalAccelerationInstanceSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyGlobalAccelerationInstanceSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyGlobalAccelerationInstanceSpecRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyGlobalAccelerationInstanceSpecRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", bandwidth);
}

std::string ModifyGlobalAccelerationInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyGlobalAccelerationInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyGlobalAccelerationInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyGlobalAccelerationInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyGlobalAccelerationInstanceSpecRequest::getGlobalAccelerationInstanceId()const
{
	return globalAccelerationInstanceId_;
}

void ModifyGlobalAccelerationInstanceSpecRequest::setGlobalAccelerationInstanceId(const std::string& globalAccelerationInstanceId)
{
	globalAccelerationInstanceId_ = globalAccelerationInstanceId;
	setParameter("GlobalAccelerationInstanceId", globalAccelerationInstanceId);
}

