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
  class AWS_GREENGRASS_API GetFunctionDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetFunctionDefinitionVersionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() override { return "GetFunctionDefinitionVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * the unique Id of the lambda definition
     */
    inline const Aws::String& GetFunctionDefinitionId() const{ return m_functionDefinitionId; }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(const Aws::String& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = value; }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(Aws::String&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::move(value); }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(const char* value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId.assign(value); }

    /**
     * the unique Id of the lambda definition
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionId(const Aws::String& value) { SetFunctionDefinitionId(value); return *this;}

    /**
     * the unique Id of the lambda definition
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionId(Aws::String&& value) { SetFunctionDefinitionId(std::move(value)); return *this;}

    /**
     * the unique Id of the lambda definition
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionId(const char* value) { SetFunctionDefinitionId(value); return *this;}


    /**
     * Function definition version Id
     */
    inline const Aws::String& GetFunctionDefinitionVersionId() const{ return m_functionDefinitionVersionId; }

    /**
     * Function definition version Id
     */
    inline void SetFunctionDefinitionVersionId(const Aws::String& value) { m_functionDefinitionVersionIdHasBeenSet = true; m_functionDefinitionVersionId = value; }

    /**
     * Function definition version Id
     */
    inline void SetFunctionDefinitionVersionId(Aws::String&& value) { m_functionDefinitionVersionIdHasBeenSet = true; m_functionDefinitionVersionId = std::move(value); }

    /**
     * Function definition version Id
     */
    inline void SetFunctionDefinitionVersionId(const char* value) { m_functionDefinitionVersionIdHasBeenSet = true; m_functionDefinitionVersionId.assign(value); }

    /**
     * Function definition version Id
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionVersionId(const Aws::String& value) { SetFunctionDefinitionVersionId(value); return *this;}

    /**
     * Function definition version Id
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionVersionId(Aws::String&& value) { SetFunctionDefinitionVersionId(std::move(value)); return *this;}

    /**
     * Function definition version Id
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionVersionId(const char* value) { SetFunctionDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet;

    Aws::String m_functionDefinitionVersionId;
    bool m_functionDefinitionVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
