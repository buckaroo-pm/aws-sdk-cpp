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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API GetDeviceDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetDeviceDefinitionVersionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() override { return "GetDeviceDefinitionVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * device definition Id
     */
    inline const Aws::String& GetDeviceDefinitionId() const{ return m_deviceDefinitionId; }

    /**
     * device definition Id
     */
    inline void SetDeviceDefinitionId(const Aws::String& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = value; }

    /**
     * device definition Id
     */
    inline void SetDeviceDefinitionId(Aws::String&& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = std::move(value); }

    /**
     * device definition Id
     */
    inline void SetDeviceDefinitionId(const char* value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId.assign(value); }

    /**
     * device definition Id
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionId(const Aws::String& value) { SetDeviceDefinitionId(value); return *this;}

    /**
     * device definition Id
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionId(Aws::String&& value) { SetDeviceDefinitionId(std::move(value)); return *this;}

    /**
     * device definition Id
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionId(const char* value) { SetDeviceDefinitionId(value); return *this;}


    /**
     * device definition version Id
     */
    inline const Aws::String& GetDeviceDefinitionVersionId() const{ return m_deviceDefinitionVersionId; }

    /**
     * device definition version Id
     */
    inline void SetDeviceDefinitionVersionId(const Aws::String& value) { m_deviceDefinitionVersionIdHasBeenSet = true; m_deviceDefinitionVersionId = value; }

    /**
     * device definition version Id
     */
    inline void SetDeviceDefinitionVersionId(Aws::String&& value) { m_deviceDefinitionVersionIdHasBeenSet = true; m_deviceDefinitionVersionId = std::move(value); }

    /**
     * device definition version Id
     */
    inline void SetDeviceDefinitionVersionId(const char* value) { m_deviceDefinitionVersionIdHasBeenSet = true; m_deviceDefinitionVersionId.assign(value); }

    /**
     * device definition version Id
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionVersionId(const Aws::String& value) { SetDeviceDefinitionVersionId(value); return *this;}

    /**
     * device definition version Id
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionVersionId(Aws::String&& value) { SetDeviceDefinitionVersionId(std::move(value)); return *this;}

    /**
     * device definition version Id
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionVersionId(const char* value) { SetDeviceDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_deviceDefinitionId;
    bool m_deviceDefinitionIdHasBeenSet;

    Aws::String m_deviceDefinitionVersionId;
    bool m_deviceDefinitionVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
