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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API DeleteSegmentRequest : public PinpointRequest
  {
  public:
    DeleteSegmentRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() override { return "DeleteSegment"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    
    inline DeleteSegmentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    
    inline DeleteSegmentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    
    inline DeleteSegmentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    
    inline DeleteSegmentRequest& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    
    inline DeleteSegmentRequest& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    
    inline DeleteSegmentRequest& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
