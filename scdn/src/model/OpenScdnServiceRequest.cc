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

#include <alibabacloud/scdn/model/OpenScdnServiceRequest.h>

using AlibabaCloud::Scdn::Model::OpenScdnServiceRequest;

OpenScdnServiceRequest::OpenScdnServiceRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "OpenScdnService")
{}

OpenScdnServiceRequest::~OpenScdnServiceRequest()
{}

std::string OpenScdnServiceRequest::getEndDate()const
{
	return endDate_;
}

void OpenScdnServiceRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string OpenScdnServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void OpenScdnServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int OpenScdnServiceRequest::getBandwidth()const
{
	return bandwidth_;
}

void OpenScdnServiceRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

int OpenScdnServiceRequest::getDomainCount()const
{
	return domainCount_;
}

void OpenScdnServiceRequest::setDomainCount(int domainCount)
{
	domainCount_ = domainCount;
	setParameter("DomainCount", std::to_string(domainCount));
}

long OpenScdnServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void OpenScdnServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string OpenScdnServiceRequest::getProtectType()const
{
	return protectType_;
}

void OpenScdnServiceRequest::setProtectType(const std::string& protectType)
{
	protectType_ = protectType;
	setParameter("ProtectType", protectType);
}

std::string OpenScdnServiceRequest::getStartDate()const
{
	return startDate_;
}

void OpenScdnServiceRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

int OpenScdnServiceRequest::getElasticProtection()const
{
	return elasticProtection_;
}

void OpenScdnServiceRequest::setElasticProtection(int elasticProtection)
{
	elasticProtection_ = elasticProtection;
	setParameter("ElasticProtection", std::to_string(elasticProtection));
}

int OpenScdnServiceRequest::getDDoSBasic()const
{
	return dDoSBasic_;
}

void OpenScdnServiceRequest::setDDoSBasic(int dDoSBasic)
{
	dDoSBasic_ = dDoSBasic;
	setParameter("DDoSBasic", std::to_string(dDoSBasic));
}

int OpenScdnServiceRequest::getCcProtection()const
{
	return ccProtection_;
}

void OpenScdnServiceRequest::setCcProtection(int ccProtection)
{
	ccProtection_ = ccProtection;
	setParameter("CcProtection", std::to_string(ccProtection));
}

std::string OpenScdnServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpenScdnServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

