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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class AWS_CODEDEPLOY_API SkipWaitTimeForInstanceTerminationRequest : public CodeDeployRequest
  {
  public:
    SkipWaitTimeForInstanceTerminationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() override { return "SkipWaitTimeForInstanceTermination"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the blue/green deployment for which you want to skip the instance
     * termination wait time.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The ID of the blue/green deployment for which you want to skip the instance
     * termination wait time.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The ID of the blue/green deployment for which you want to skip the instance
     * termination wait time.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The ID of the blue/green deployment for which you want to skip the instance
     * termination wait time.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The ID of the blue/green deployment for which you want to skip the instance
     * termination wait time.</p>
     */
    inline SkipWaitTimeForInstanceTerminationRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The ID of the blue/green deployment for which you want to skip the instance
     * termination wait time.</p>
     */
    inline SkipWaitTimeForInstanceTerminationRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the blue/green deployment for which you want to skip the instance
     * termination wait time.</p>
     */
    inline SkipWaitTimeForInstanceTerminationRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
