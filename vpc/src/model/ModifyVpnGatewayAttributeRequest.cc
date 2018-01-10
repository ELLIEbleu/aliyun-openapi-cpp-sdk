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

#include <alibabacloud/vpc/model/ModifyVpnGatewayAttributeRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyVpnGatewayAttributeRequest::ModifyVpnGatewayAttributeRequest() :
	VpcRequest("ModifyVpnGatewayAttribute")
{}

ModifyVpnGatewayAttributeRequest::~ModifyVpnGatewayAttributeRequest()
{}

long ModifyVpnGatewayAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVpnGatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyVpnGatewayAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVpnGatewayAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyVpnGatewayAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVpnGatewayAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyVpnGatewayAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyVpnGatewayAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyVpnGatewayAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVpnGatewayAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyVpnGatewayAttributeRequest::getName()const
{
	return name_;
}

void ModifyVpnGatewayAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyVpnGatewayAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyVpnGatewayAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyVpnGatewayAttributeRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void ModifyVpnGatewayAttributeRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setParameter("VpnGatewayId", vpnGatewayId);
}

long ModifyVpnGatewayAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVpnGatewayAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

