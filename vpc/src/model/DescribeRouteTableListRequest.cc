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

#include <alibabacloud/vpc/model/DescribeRouteTableListRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeRouteTableListRequest::DescribeRouteTableListRequest() :
	VpcRequest("DescribeRouteTableList")
{}

DescribeRouteTableListRequest::~DescribeRouteTableListRequest()
{}

long DescribeRouteTableListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRouteTableListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRouteTableListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRouteTableListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRouteTableListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRouteTableListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeRouteTableListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRouteTableListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeRouteTableListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouteTableListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRouteTableListRequest::getRouterType()const
{
	return routerType_;
}

void DescribeRouteTableListRequest::setRouterType(const std::string& routerType)
{
	routerType_ = routerType;
	setParameter("RouterType", routerType);
}

std::string DescribeRouteTableListRequest::getRouteTableName()const
{
	return routeTableName_;
}

void DescribeRouteTableListRequest::setRouteTableName(const std::string& routeTableName)
{
	routeTableName_ = routeTableName;
	setParameter("RouteTableName", routeTableName);
}

std::string DescribeRouteTableListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRouteTableListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeRouteTableListRequest::getRouterId()const
{
	return routerId_;
}

void DescribeRouteTableListRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setParameter("RouterId", routerId);
}

std::string DescribeRouteTableListRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeRouteTableListRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

int DescribeRouteTableListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRouteTableListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRouteTableListRequest::getRouteTableId()const
{
	return routeTableId_;
}

void DescribeRouteTableListRequest::setRouteTableId(const std::string& routeTableId)
{
	routeTableId_ = routeTableId;
	setParameter("RouteTableId", routeTableId);
}

