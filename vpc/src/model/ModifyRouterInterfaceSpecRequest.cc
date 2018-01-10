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

#include <alibabacloud/vpc/model/ModifyRouterInterfaceSpecRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyRouterInterfaceSpecRequest::ModifyRouterInterfaceSpecRequest() :
	VpcRequest("ModifyRouterInterfaceSpec")
{}

ModifyRouterInterfaceSpecRequest::~ModifyRouterInterfaceSpecRequest()
{}

long ModifyRouterInterfaceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyRouterInterfaceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyRouterInterfaceSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyRouterInterfaceSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyRouterInterfaceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyRouterInterfaceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyRouterInterfaceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyRouterInterfaceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyRouterInterfaceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyRouterInterfaceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyRouterInterfaceSpecRequest::getRouterInterfaceId()const
{
	return routerInterfaceId_;
}

void ModifyRouterInterfaceSpecRequest::setRouterInterfaceId(const std::string& routerInterfaceId)
{
	routerInterfaceId_ = routerInterfaceId;
	setParameter("RouterInterfaceId", routerInterfaceId);
}

long ModifyRouterInterfaceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyRouterInterfaceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyRouterInterfaceSpecRequest::getSpec()const
{
	return spec_;
}

void ModifyRouterInterfaceSpecRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setParameter("Spec", spec);
}

