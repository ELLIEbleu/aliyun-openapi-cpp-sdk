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

#include <alibabacloud/rtc/model/DescribeConferenceAuthInfoRequest.h>

using AlibabaCloud::Rtc::Model::DescribeConferenceAuthInfoRequest;

DescribeConferenceAuthInfoRequest::DescribeConferenceAuthInfoRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeConferenceAuthInfo")
{}

DescribeConferenceAuthInfoRequest::~DescribeConferenceAuthInfoRequest()
{}

std::string DescribeConferenceAuthInfoRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeConferenceAuthInfoRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeConferenceAuthInfoRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeConferenceAuthInfoRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long DescribeConferenceAuthInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeConferenceAuthInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeConferenceAuthInfoRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeConferenceAuthInfoRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeConferenceAuthInfoRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeConferenceAuthInfoRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeConferenceAuthInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeConferenceAuthInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeConferenceAuthInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeConferenceAuthInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeConferenceAuthInfoRequest::getVersion()const
{
	return version_;
}

void DescribeConferenceAuthInfoRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeConferenceAuthInfoRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeConferenceAuthInfoRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeConferenceAuthInfoRequest::getCallerType()const
{
	return callerType_;
}

void DescribeConferenceAuthInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeConferenceAuthInfoRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeConferenceAuthInfoRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeConferenceAuthInfoRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeConferenceAuthInfoRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeConferenceAuthInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeConferenceAuthInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeConferenceAuthInfoRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeConferenceAuthInfoRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeConferenceAuthInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeConferenceAuthInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeConferenceAuthInfoRequest::getConferenceId()const
{
	return conferenceId_;
}

void DescribeConferenceAuthInfoRequest::setConferenceId(const std::string& conferenceId)
{
	conferenceId_ = conferenceId;
	setParameter("ConferenceId", conferenceId);
}

std::string DescribeConferenceAuthInfoRequest::getRequestId()const
{
	return requestId_;
}

void DescribeConferenceAuthInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeConferenceAuthInfoRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeConferenceAuthInfoRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeConferenceAuthInfoRequest::getAppId()const
{
	return appId_;
}

void DescribeConferenceAuthInfoRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DescribeConferenceAuthInfoRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeConferenceAuthInfoRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeConferenceAuthInfoRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeConferenceAuthInfoRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeConferenceAuthInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeConferenceAuthInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

