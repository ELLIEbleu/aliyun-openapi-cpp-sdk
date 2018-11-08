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

#include <alibabacloud/live/model/DeleteLiveDomainRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveDomainRequest;

DeleteLiveDomainRequest::DeleteLiveDomainRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteLiveDomain")
{}

DeleteLiveDomainRequest::~DeleteLiveDomainRequest()
{}

std::string DeleteLiveDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLiveDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteLiveDomainRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteLiveDomainRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteLiveDomainRequest::getDomainName()const
{
	return domainName_;
}

void DeleteLiveDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DeleteLiveDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLiveDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteLiveDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLiveDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

