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
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/NodegroupIssueCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an issue with an Amazon EKS resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Issue">AWS API
   * Reference</a></p>
   */
  class AWS_EKS_API Issue
  {
  public:
    Issue();
    Issue(Aws::Utils::Json::JsonView jsonValue);
    Issue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A brief description of the error.</p> <ul> <li> <p>
     * <b>AutoScalingGroupNotFound</b>: We couldn't find the Auto Scaling group
     * associated with the managed node group. You may be able to recreate an Auto
     * Scaling group with the same settings to recover.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupNotFound</b>: We couldn't find the cluster security group for
     * the cluster. You must recreate your cluster.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupDeletionFailure</b>: We could not delete the remote access
     * security group for your managed node group. Remove any dependencies from the
     * security group.</p> </li> <li> <p> <b>Ec2LaunchTemplateNotFound</b>: We couldn't
     * find the Amazon EC2 launch template for your managed node group. You may be able
     * to recreate a launch template with the same settings to recover.</p> </li> <li>
     * <p> <b>Ec2LaunchTemplateVersionMismatch</b>: The Amazon EC2 launch template
     * version for your managed node group does not match the version that Amazon EKS
     * created. You may be able to revert to the Amazon EKS-created version to
     * recover.</p> </li> <li> <p> <b>IamInstanceProfileNotFound</b>: We couldn't find
     * the IAM instance profile for your managed node group. You may be able to
     * recreate an instance profile with the same settings to recover.</p> </li> <li>
     * <p> <b>IamNodeRoleNotFound</b>: We couldn't find the IAM role for your managed
     * node group. You may be able to recreate an IAM role with the same settings to
     * recover.</p> </li> <li> <p> <b>AsgInstanceLaunchFailures</b>: Your Auto Scaling
     * group is experiencing failures while attempting to launch instances.</p> </li>
     * <li> <p> <b>InstanceLimitExceeded</b>: Your AWS account is unable to launch any
     * more instances of the specified instance type. You may be able to request an
     * Amazon EC2 instance limit increase to recover.</p> </li> <li> <p>
     * <b>InsufficientFreeAddresses</b>: One or more of the subnets associated with
     * your managed node group does not have enough available IP addresses for new
     * nodes.</p> </li> <li> <p> <b>AccessDenied</b>: Amazon EKS and or one or more of
     * your managed nodes is unable to communicate with your cluster API server.</p>
     * </li> <li> <p> <b>InternalFailure</b>: These errors are usually caused by an
     * Amazon EKS server-side issue.</p> </li> </ul>
     */
    inline const NodegroupIssueCode& GetCode() const{ return m_code; }

    /**
     * <p>A brief description of the error.</p> <ul> <li> <p>
     * <b>AutoScalingGroupNotFound</b>: We couldn't find the Auto Scaling group
     * associated with the managed node group. You may be able to recreate an Auto
     * Scaling group with the same settings to recover.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupNotFound</b>: We couldn't find the cluster security group for
     * the cluster. You must recreate your cluster.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupDeletionFailure</b>: We could not delete the remote access
     * security group for your managed node group. Remove any dependencies from the
     * security group.</p> </li> <li> <p> <b>Ec2LaunchTemplateNotFound</b>: We couldn't
     * find the Amazon EC2 launch template for your managed node group. You may be able
     * to recreate a launch template with the same settings to recover.</p> </li> <li>
     * <p> <b>Ec2LaunchTemplateVersionMismatch</b>: The Amazon EC2 launch template
     * version for your managed node group does not match the version that Amazon EKS
     * created. You may be able to revert to the Amazon EKS-created version to
     * recover.</p> </li> <li> <p> <b>IamInstanceProfileNotFound</b>: We couldn't find
     * the IAM instance profile for your managed node group. You may be able to
     * recreate an instance profile with the same settings to recover.</p> </li> <li>
     * <p> <b>IamNodeRoleNotFound</b>: We couldn't find the IAM role for your managed
     * node group. You may be able to recreate an IAM role with the same settings to
     * recover.</p> </li> <li> <p> <b>AsgInstanceLaunchFailures</b>: Your Auto Scaling
     * group is experiencing failures while attempting to launch instances.</p> </li>
     * <li> <p> <b>InstanceLimitExceeded</b>: Your AWS account is unable to launch any
     * more instances of the specified instance type. You may be able to request an
     * Amazon EC2 instance limit increase to recover.</p> </li> <li> <p>
     * <b>InsufficientFreeAddresses</b>: One or more of the subnets associated with
     * your managed node group does not have enough available IP addresses for new
     * nodes.</p> </li> <li> <p> <b>AccessDenied</b>: Amazon EKS and or one or more of
     * your managed nodes is unable to communicate with your cluster API server.</p>
     * </li> <li> <p> <b>InternalFailure</b>: These errors are usually caused by an
     * Amazon EKS server-side issue.</p> </li> </ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>A brief description of the error.</p> <ul> <li> <p>
     * <b>AutoScalingGroupNotFound</b>: We couldn't find the Auto Scaling group
     * associated with the managed node group. You may be able to recreate an Auto
     * Scaling group with the same settings to recover.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupNotFound</b>: We couldn't find the cluster security group for
     * the cluster. You must recreate your cluster.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupDeletionFailure</b>: We could not delete the remote access
     * security group for your managed node group. Remove any dependencies from the
     * security group.</p> </li> <li> <p> <b>Ec2LaunchTemplateNotFound</b>: We couldn't
     * find the Amazon EC2 launch template for your managed node group. You may be able
     * to recreate a launch template with the same settings to recover.</p> </li> <li>
     * <p> <b>Ec2LaunchTemplateVersionMismatch</b>: The Amazon EC2 launch template
     * version for your managed node group does not match the version that Amazon EKS
     * created. You may be able to revert to the Amazon EKS-created version to
     * recover.</p> </li> <li> <p> <b>IamInstanceProfileNotFound</b>: We couldn't find
     * the IAM instance profile for your managed node group. You may be able to
     * recreate an instance profile with the same settings to recover.</p> </li> <li>
     * <p> <b>IamNodeRoleNotFound</b>: We couldn't find the IAM role for your managed
     * node group. You may be able to recreate an IAM role with the same settings to
     * recover.</p> </li> <li> <p> <b>AsgInstanceLaunchFailures</b>: Your Auto Scaling
     * group is experiencing failures while attempting to launch instances.</p> </li>
     * <li> <p> <b>InstanceLimitExceeded</b>: Your AWS account is unable to launch any
     * more instances of the specified instance type. You may be able to request an
     * Amazon EC2 instance limit increase to recover.</p> </li> <li> <p>
     * <b>InsufficientFreeAddresses</b>: One or more of the subnets associated with
     * your managed node group does not have enough available IP addresses for new
     * nodes.</p> </li> <li> <p> <b>AccessDenied</b>: Amazon EKS and or one or more of
     * your managed nodes is unable to communicate with your cluster API server.</p>
     * </li> <li> <p> <b>InternalFailure</b>: These errors are usually caused by an
     * Amazon EKS server-side issue.</p> </li> </ul>
     */
    inline void SetCode(const NodegroupIssueCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>A brief description of the error.</p> <ul> <li> <p>
     * <b>AutoScalingGroupNotFound</b>: We couldn't find the Auto Scaling group
     * associated with the managed node group. You may be able to recreate an Auto
     * Scaling group with the same settings to recover.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupNotFound</b>: We couldn't find the cluster security group for
     * the cluster. You must recreate your cluster.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupDeletionFailure</b>: We could not delete the remote access
     * security group for your managed node group. Remove any dependencies from the
     * security group.</p> </li> <li> <p> <b>Ec2LaunchTemplateNotFound</b>: We couldn't
     * find the Amazon EC2 launch template for your managed node group. You may be able
     * to recreate a launch template with the same settings to recover.</p> </li> <li>
     * <p> <b>Ec2LaunchTemplateVersionMismatch</b>: The Amazon EC2 launch template
     * version for your managed node group does not match the version that Amazon EKS
     * created. You may be able to revert to the Amazon EKS-created version to
     * recover.</p> </li> <li> <p> <b>IamInstanceProfileNotFound</b>: We couldn't find
     * the IAM instance profile for your managed node group. You may be able to
     * recreate an instance profile with the same settings to recover.</p> </li> <li>
     * <p> <b>IamNodeRoleNotFound</b>: We couldn't find the IAM role for your managed
     * node group. You may be able to recreate an IAM role with the same settings to
     * recover.</p> </li> <li> <p> <b>AsgInstanceLaunchFailures</b>: Your Auto Scaling
     * group is experiencing failures while attempting to launch instances.</p> </li>
     * <li> <p> <b>InstanceLimitExceeded</b>: Your AWS account is unable to launch any
     * more instances of the specified instance type. You may be able to request an
     * Amazon EC2 instance limit increase to recover.</p> </li> <li> <p>
     * <b>InsufficientFreeAddresses</b>: One or more of the subnets associated with
     * your managed node group does not have enough available IP addresses for new
     * nodes.</p> </li> <li> <p> <b>AccessDenied</b>: Amazon EKS and or one or more of
     * your managed nodes is unable to communicate with your cluster API server.</p>
     * </li> <li> <p> <b>InternalFailure</b>: These errors are usually caused by an
     * Amazon EKS server-side issue.</p> </li> </ul>
     */
    inline void SetCode(NodegroupIssueCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>A brief description of the error.</p> <ul> <li> <p>
     * <b>AutoScalingGroupNotFound</b>: We couldn't find the Auto Scaling group
     * associated with the managed node group. You may be able to recreate an Auto
     * Scaling group with the same settings to recover.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupNotFound</b>: We couldn't find the cluster security group for
     * the cluster. You must recreate your cluster.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupDeletionFailure</b>: We could not delete the remote access
     * security group for your managed node group. Remove any dependencies from the
     * security group.</p> </li> <li> <p> <b>Ec2LaunchTemplateNotFound</b>: We couldn't
     * find the Amazon EC2 launch template for your managed node group. You may be able
     * to recreate a launch template with the same settings to recover.</p> </li> <li>
     * <p> <b>Ec2LaunchTemplateVersionMismatch</b>: The Amazon EC2 launch template
     * version for your managed node group does not match the version that Amazon EKS
     * created. You may be able to revert to the Amazon EKS-created version to
     * recover.</p> </li> <li> <p> <b>IamInstanceProfileNotFound</b>: We couldn't find
     * the IAM instance profile for your managed node group. You may be able to
     * recreate an instance profile with the same settings to recover.</p> </li> <li>
     * <p> <b>IamNodeRoleNotFound</b>: We couldn't find the IAM role for your managed
     * node group. You may be able to recreate an IAM role with the same settings to
     * recover.</p> </li> <li> <p> <b>AsgInstanceLaunchFailures</b>: Your Auto Scaling
     * group is experiencing failures while attempting to launch instances.</p> </li>
     * <li> <p> <b>InstanceLimitExceeded</b>: Your AWS account is unable to launch any
     * more instances of the specified instance type. You may be able to request an
     * Amazon EC2 instance limit increase to recover.</p> </li> <li> <p>
     * <b>InsufficientFreeAddresses</b>: One or more of the subnets associated with
     * your managed node group does not have enough available IP addresses for new
     * nodes.</p> </li> <li> <p> <b>AccessDenied</b>: Amazon EKS and or one or more of
     * your managed nodes is unable to communicate with your cluster API server.</p>
     * </li> <li> <p> <b>InternalFailure</b>: These errors are usually caused by an
     * Amazon EKS server-side issue.</p> </li> </ul>
     */
    inline Issue& WithCode(const NodegroupIssueCode& value) { SetCode(value); return *this;}

    /**
     * <p>A brief description of the error.</p> <ul> <li> <p>
     * <b>AutoScalingGroupNotFound</b>: We couldn't find the Auto Scaling group
     * associated with the managed node group. You may be able to recreate an Auto
     * Scaling group with the same settings to recover.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupNotFound</b>: We couldn't find the cluster security group for
     * the cluster. You must recreate your cluster.</p> </li> <li> <p>
     * <b>Ec2SecurityGroupDeletionFailure</b>: We could not delete the remote access
     * security group for your managed node group. Remove any dependencies from the
     * security group.</p> </li> <li> <p> <b>Ec2LaunchTemplateNotFound</b>: We couldn't
     * find the Amazon EC2 launch template for your managed node group. You may be able
     * to recreate a launch template with the same settings to recover.</p> </li> <li>
     * <p> <b>Ec2LaunchTemplateVersionMismatch</b>: The Amazon EC2 launch template
     * version for your managed node group does not match the version that Amazon EKS
     * created. You may be able to revert to the Amazon EKS-created version to
     * recover.</p> </li> <li> <p> <b>IamInstanceProfileNotFound</b>: We couldn't find
     * the IAM instance profile for your managed node group. You may be able to
     * recreate an instance profile with the same settings to recover.</p> </li> <li>
     * <p> <b>IamNodeRoleNotFound</b>: We couldn't find the IAM role for your managed
     * node group. You may be able to recreate an IAM role with the same settings to
     * recover.</p> </li> <li> <p> <b>AsgInstanceLaunchFailures</b>: Your Auto Scaling
     * group is experiencing failures while attempting to launch instances.</p> </li>
     * <li> <p> <b>InstanceLimitExceeded</b>: Your AWS account is unable to launch any
     * more instances of the specified instance type. You may be able to request an
     * Amazon EC2 instance limit increase to recover.</p> </li> <li> <p>
     * <b>InsufficientFreeAddresses</b>: One or more of the subnets associated with
     * your managed node group does not have enough available IP addresses for new
     * nodes.</p> </li> <li> <p> <b>AccessDenied</b>: Amazon EKS and or one or more of
     * your managed nodes is unable to communicate with your cluster API server.</p>
     * </li> <li> <p> <b>InternalFailure</b>: These errors are usually caused by an
     * Amazon EKS server-side issue.</p> </li> </ul>
     */
    inline Issue& WithCode(NodegroupIssueCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The error message associated with the issue.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message associated with the issue.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message associated with the issue.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message associated with the issue.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message associated with the issue.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message associated with the issue.</p>
     */
    inline Issue& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message associated with the issue.</p>
     */
    inline Issue& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message associated with the issue.</p>
     */
    inline Issue& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline Issue& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline Issue& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline Issue& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline Issue& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The AWS resources that are afflicted by this issue.</p>
     */
    inline Issue& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

  private:

    NodegroupIssueCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
