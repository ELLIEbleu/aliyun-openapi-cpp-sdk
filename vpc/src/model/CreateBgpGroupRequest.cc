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

#include <alibabacloud/vpc/model/CreateBgpGroupRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateBgpGroupRequest::CreateBgpGroupRequest() :
	VpcRequest("CreateBgpGroup")
{}

CreateBgpGroupRequest::~CreateBgpGroupRequest()
{}

std::string CreateBgpGroupRequest::getAuthKey()const
{
	return authKey_;
}

void CreateBgpGroupRequest::setAuthKey(const std::string& authKey)
{
	authKey_ = authKey;
	setParameter("AuthKey", authKey);
}

long CreateBgpGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBgpGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateBgpGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateBgpGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateBgpGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateBgpGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateBgpGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateBgpGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateBgpGroupRequest::getDescription()const
{
	return description_;
}

void CreateBgpGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long CreateBgpGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBgpGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long CreateBgpGroupRequest::getPeerAsn()const
{
	return peerAsn_;
}

void CreateBgpGroupRequest::setPeerAsn(long peerAsn)
{
	peerAsn_ = peerAsn;
	setParameter("PeerAsn", std::to_string(peerAsn));
}

bool CreateBgpGroupRequest::getIsFakeAsn()const
{
	return isFakeAsn_;
}

void CreateBgpGroupRequest::setIsFakeAsn(bool isFakeAsn)
{
	isFakeAsn_ = isFakeAsn;
	setParameter("IsFakeAsn", std::to_string(isFakeAsn));
}

std::string CreateBgpGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateBgpGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateBgpGroupRequest::getRouterId()const
{
	return routerId_;
}

void CreateBgpGroupRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setParameter("RouterId", routerId);
}

std::string CreateBgpGroupRequest::getName()const
{
	return name_;
}

void CreateBgpGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

