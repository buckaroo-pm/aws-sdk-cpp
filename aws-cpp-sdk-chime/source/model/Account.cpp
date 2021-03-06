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

#include <aws/chime/model/Account.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Account::Account() : 
    m_awsAccountIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accountType(AccountType::NOT_SET),
    m_accountTypeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_defaultLicense(License::NOT_SET),
    m_defaultLicenseHasBeenSet(false),
    m_supportedLicensesHasBeenSet(false)
{
}

Account::Account(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accountType(AccountType::NOT_SET),
    m_accountTypeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_defaultLicense(License::NOT_SET),
    m_defaultLicenseHasBeenSet(false),
    m_supportedLicensesHasBeenSet(false)
{
  *this = jsonValue;
}

Account& Account::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountType"))
  {
    m_accountType = AccountTypeMapper::GetAccountTypeForName(jsonValue.GetString("AccountType"));

    m_accountTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultLicense"))
  {
    m_defaultLicense = LicenseMapper::GetLicenseForName(jsonValue.GetString("DefaultLicense"));

    m_defaultLicenseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedLicenses"))
  {
    Array<JsonView> supportedLicensesJsonList = jsonValue.GetArray("SupportedLicenses");
    for(unsigned supportedLicensesIndex = 0; supportedLicensesIndex < supportedLicensesJsonList.GetLength(); ++supportedLicensesIndex)
    {
      m_supportedLicenses.push_back(LicenseMapper::GetLicenseForName(supportedLicensesJsonList[supportedLicensesIndex].AsString()));
    }
    m_supportedLicensesHasBeenSet = true;
  }

  return *this;
}

JsonValue Account::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("AwsAccountId", m_awsAccountId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_accountTypeHasBeenSet)
  {
   payload.WithString("AccountType", AccountTypeMapper::GetNameForAccountType(m_accountType));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_defaultLicenseHasBeenSet)
  {
   payload.WithString("DefaultLicense", LicenseMapper::GetNameForLicense(m_defaultLicense));
  }

  if(m_supportedLicensesHasBeenSet)
  {
   Array<JsonValue> supportedLicensesJsonList(m_supportedLicenses.size());
   for(unsigned supportedLicensesIndex = 0; supportedLicensesIndex < supportedLicensesJsonList.GetLength(); ++supportedLicensesIndex)
   {
     supportedLicensesJsonList[supportedLicensesIndex].AsString(LicenseMapper::GetNameForLicense(m_supportedLicenses[supportedLicensesIndex]));
   }
   payload.WithArray("SupportedLicenses", std::move(supportedLicensesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
