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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/HttpRequestMethodEnum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  class AWS_ELASTICLOADBALANCINGV2_API HttpRequestMethodConditionConfig
  {
  public:
    HttpRequestMethodConditionConfig();
    HttpRequestMethodConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    HttpRequestMethodConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::Vector<HttpRequestMethodEnum>& GetValues() const{ return m_values; }

    
    inline void SetValues(const Aws::Vector<HttpRequestMethodEnum>& value) { m_valuesHasBeenSet = true; m_values = value; }

    
    inline void SetValues(Aws::Vector<HttpRequestMethodEnum>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    
    inline HttpRequestMethodConditionConfig& WithValues(const Aws::Vector<HttpRequestMethodEnum>& value) { SetValues(value); return *this;}

    
    inline HttpRequestMethodConditionConfig& WithValues(Aws::Vector<HttpRequestMethodEnum>&& value) { SetValues(std::move(value)); return *this;}

    
    inline HttpRequestMethodConditionConfig& AddValues(const HttpRequestMethodEnum& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    
    inline HttpRequestMethodConditionConfig& AddValues(HttpRequestMethodEnum&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<HttpRequestMethodEnum> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
