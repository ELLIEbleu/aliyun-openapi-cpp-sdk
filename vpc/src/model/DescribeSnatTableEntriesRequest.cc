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

#include <alibabacloud/vpc/model/DescribeSnatTableEntriesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeSnatTableEntriesRequest;

DescribeSnatTableEntriesRequest::DescribeSnatTableEntriesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeSnatTableEntries")
{}

DescribeSnatTableEntriesRequest::~DescribeSnatTableEntriesRequest()
{}

long DescribeSnatTableEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSnatTableEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSnatTableEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSnatTableEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSnatTableEntriesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSnatTableEntriesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSnatTableEntriesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSnatTableEntriesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeSnatTableEntriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSnatTableEntriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSnatTableEntriesRequest::getSnatTableId()const
{
	return snatTableId_;
}

void DescribeSnatTableEntriesRequest::setSnatTableId(const std::string& snatTableId)
{
	snatTableId_ = snatTableId;
	setParameter("SnatTableId", snatTableId);
}

std::string DescribeSnatTableEntriesRequest::getSnatEntryId()const
{
	return snatEntryId_;
}

void DescribeSnatTableEntriesRequest::setSnatEntryId(const std::string& snatEntryId)
{
	snatEntryId_ = snatEntryId;
	setParameter("SnatEntryId", snatEntryId);
}

long DescribeSnatTableEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSnatTableEntriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeSnatTableEntriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnatTableEntriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

