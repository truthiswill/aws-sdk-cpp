﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/MemberError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API BatchCreateRoomMembershipResult
  {
  public:
    BatchCreateRoomMembershipResult();
    BatchCreateRoomMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchCreateRoomMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline const Aws::Vector<MemberError>& GetErrors() const{ return m_errors; }

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(const Aws::Vector<MemberError>& value) { m_errors = value; }

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(Aws::Vector<MemberError>&& value) { m_errors = std::move(value); }

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateRoomMembershipResult& WithErrors(const Aws::Vector<MemberError>& value) { SetErrors(value); return *this;}

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateRoomMembershipResult& WithErrors(Aws::Vector<MemberError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateRoomMembershipResult& AddErrors(const MemberError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>If the action fails for one or more of the member IDs in the request, a list
     * of the member IDs is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateRoomMembershipResult& AddErrors(MemberError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MemberError> m_errors;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
