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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class ModelStatus
  {
    NOT_SET,
    SUBMITTED,
    TRAINING,
    DELETING,
    IN_ERROR,
    TRAINED
  };

namespace ModelStatusMapper
{
AWS_COMPREHEND_API ModelStatus GetModelStatusForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForModelStatus(ModelStatus value);
} // namespace ModelStatusMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
