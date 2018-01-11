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

#include <alibabacloud/slb/model/DescribeHealthStatusRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeHealthStatusRequest::DescribeHealthStatusRequest() :
	SlbRequest("DescribeHealthStatus")
{}

DescribeHealthStatusRequest::~DescribeHealthStatusRequest()
{}

std::string DescribeHealthStatusRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeHealthStatusRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeHealthStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeHealthStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeHealthStatusRequest::getListenerPort()const
{
	return listenerPort_;
}

void DescribeHealthStatusRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string DescribeHealthStatusRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeHealthStatusRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeHealthStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeHealthStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeHealthStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeHealthStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeHealthStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeHealthStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeHealthStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeHealthStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeHealthStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeHealthStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeHealthStatusRequest::getTags()const
{
	return tags_;
}

void DescribeHealthStatusRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}
