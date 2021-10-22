// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "Image.h"

namespace AdaptiveCards::Rendering::WinUI3
{
    class AdaptiveImageRenderer
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
                                              ABI::AdaptiveCards::Rendering::WinUI3::IAdaptiveElementRenderer>
    {
        AdaptiveRuntime(AdaptiveImageRenderer);

    public:
        AdaptiveImageRenderer();
        AdaptiveImageRenderer(Microsoft::WRL::ComPtr<AdaptiveCards::Rendering::WinUI3::XamlBuilder> xamlBuilder);
        HRESULT RuntimeClassInitialize() noexcept;

        IFACEMETHODIMP Render(_In_ ABI::AdaptiveCards::ObjectModel::WinUI3::IAdaptiveCardElement* cardElement,
                              _In_ ABI::AdaptiveCards::Rendering::WinUI3::IAdaptiveRenderContext* renderContext,
                              _In_ ABI::AdaptiveCards::Rendering::WinUI3::IAdaptiveRenderArgs* renderArgs,
                              _COM_Outptr_ ABI::Windows::UI::Xaml::IUIElement** result) noexcept override;

    private:
        Microsoft::WRL::ComPtr<AdaptiveCards::Rendering::WinUI3::XamlBuilder> m_xamlBuilder;
    };

    ActivatableClass(AdaptiveImageRenderer);
}