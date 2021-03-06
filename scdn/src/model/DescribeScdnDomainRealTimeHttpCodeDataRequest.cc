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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeHttpCodeDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeHttpCodeDataRequest;

DescribeScdnDomainRealTimeHttpCodeDataRequest::DescribeScdnDomainRealTimeHttpCodeDataRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeHttpCodeData")
{}

DescribeScdnDomainRealTimeHttpCodeDataRequest::~DescribeScdnDomainRealTimeHttpCodeDataRequest()
{}

long DescribeScdnDomainRealTimeHttpCodeDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeScdnDomainRealTimeHttpCodeDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeScdnDomainRealTimeHttpCodeDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getProduct()const
{
	return product_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeScdnDomainRealTimeHttpCodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getVersion()const
{
	return version_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeScdnDomainRealTimeHttpCodeDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeScdnDomainRealTimeHttpCodeDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeScdnDomainRealTimeHttpCodeDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getInterval()const
{
	return interval_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

std::string DescribeScdnDomainRealTimeHttpCodeDataRequest::getFields()const
{
	return fields_;
}

void DescribeScdnDomainRealTimeHttpCodeDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

