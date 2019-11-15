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

#include <aws/eks/model/CreateNodegroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNodegroupRequest::CreateNodegroupRequest() : 
    m_clusterNameHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false),
    m_scalingConfigHasBeenSet(false),
    m_diskSize(0),
    m_diskSizeHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_amiType(AMITypes::NOT_SET),
    m_amiTypeHasBeenSet(false),
    m_remoteAccessHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_versionHasBeenSet(false),
    m_releaseVersionHasBeenSet(false)
{
}

Aws::String CreateNodegroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nodegroupNameHasBeenSet)
  {
   payload.WithString("nodegroupName", m_nodegroupName);

  }

  if(m_scalingConfigHasBeenSet)
  {
   payload.WithObject("scalingConfig", m_scalingConfig.Jsonize());

  }

  if(m_diskSizeHasBeenSet)
  {
   payload.WithInteger("diskSize", m_diskSize);

  }

  if(m_subnetsHasBeenSet)
  {
   Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_instanceTypesHasBeenSet)
  {
   Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
   for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
   {
     instanceTypesJsonList[instanceTypesIndex].AsString(m_instanceTypes[instanceTypesIndex]);
   }
   payload.WithArray("instanceTypes", std::move(instanceTypesJsonList));

  }

  if(m_amiTypeHasBeenSet)
  {
   payload.WithString("amiType", AMITypesMapper::GetNameForAMITypes(m_amiType));
  }

  if(m_remoteAccessHasBeenSet)
  {
   payload.WithObject("remoteAccess", m_remoteAccess.Jsonize());

  }

  if(m_nodeRoleHasBeenSet)
  {
   payload.WithString("nodeRole", m_nodeRole);

  }

  if(m_labelsHasBeenSet)
  {
   JsonValue labelsJsonMap;
   for(auto& labelsItem : m_labels)
   {
     labelsJsonMap.WithString(labelsItem.first, labelsItem.second);
   }
   payload.WithObject("labels", std::move(labelsJsonMap));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_releaseVersionHasBeenSet)
  {
   payload.WithString("releaseVersion", m_releaseVersion);

  }

  return payload.View().WriteReadable();
}




