﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ExperienceConfiguration.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AWS_KENDRA_API UpdateExperienceRequest : public KendraRequest
  {
  public:
    UpdateExperienceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExperience"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of your Amazon Kendra experience you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of your Amazon Kendra experience you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of your Amazon Kendra experience you want to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of your Amazon Kendra experience you want to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the index for your Amazon Kendra experience you want to
     * update.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience you want to
     * update.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience you want to
     * update.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience you want to
     * update.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience you want to
     * update.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for your Amazon Kendra experience you want to
     * update.</p>
     */
    inline UpdateExperienceRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for your Amazon Kendra experience you want to
     * update.</p>
     */
    inline UpdateExperienceRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for your Amazon Kendra experience you want to
     * update.</p>
     */
    inline UpdateExperienceRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and Amazon Web Services SSO that stores your
     * user and group information. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and Amazon Web Services SSO that stores your
     * user and group information. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and Amazon Web Services SSO that stores your
     * user and group information. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and Amazon Web Services SSO that stores your
     * user and group information. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and Amazon Web Services SSO that stores your
     * user and group information. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and Amazon Web Services SSO that stores your
     * user and group information. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline UpdateExperienceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and Amazon Web Services SSO that stores your
     * user and group information. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline UpdateExperienceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to access
     * <code>Query</code> API, <code>QuerySuggestions</code> API,
     * <code>SubmitFeedback</code> API, and Amazon Web Services SSO that stores your
     * user and group information. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">IAM roles for
     * Amazon Kendra</a>.</p>
     */
    inline UpdateExperienceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides the user configuration information. This includes the Amazon Web
     * Services SSO field name that contains the identifiers of your users, such as
     * their emails.</p>
     */
    inline const ExperienceConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Provides the user configuration information. This includes the Amazon Web
     * Services SSO field name that contains the identifiers of your users, such as
     * their emails.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Provides the user configuration information. This includes the Amazon Web
     * Services SSO field name that contains the identifiers of your users, such as
     * their emails.</p>
     */
    inline void SetConfiguration(const ExperienceConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Provides the user configuration information. This includes the Amazon Web
     * Services SSO field name that contains the identifiers of your users, such as
     * their emails.</p>
     */
    inline void SetConfiguration(ExperienceConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Provides the user configuration information. This includes the Amazon Web
     * Services SSO field name that contains the identifiers of your users, such as
     * their emails.</p>
     */
    inline UpdateExperienceRequest& WithConfiguration(const ExperienceConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Provides the user configuration information. This includes the Amazon Web
     * Services SSO field name that contains the identifiers of your users, such as
     * their emails.</p>
     */
    inline UpdateExperienceRequest& WithConfiguration(ExperienceConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The description of your Amazon Kendra experience you want to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of your Amazon Kendra experience you want to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of your Amazon Kendra experience you want to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of your Amazon Kendra experience you want to update.</p>
     */
    inline UpdateExperienceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    ExperienceConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
