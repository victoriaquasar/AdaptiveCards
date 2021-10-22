// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "Container.h"

namespace AdaptiveCards::Rendering::WinUI3
{
    class AdaptiveContainerRenderer
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
                                              ABI::AdaptiveCards::Rendering::WinUI3::IAdaptiveElementRenderer>
    {
        AdaptiveRuntime(AdaptiveContainerRenderer);

    public:
        HRESULT RuntimeClassInitialize() noexcept;

        IFACEMETHODIMP Render(_In_ ABI::AdaptiveCards::ObjectModel::WinUI3::IAdaptiveCardElement* cardElement,
                              _In_ ABI::AdaptiveCards::Rendering::WinUI3::IAdaptiveRenderContext* renderContext,
                              _In_ ABI::AdaptiveCards::Rendering::WinUI3::IAdaptiveRenderArgs* renderArgs,
                              _COM_Outptr_ ABI::Windows::UI::Xaml::IUIElement** result) noexcept override;

        rtxaml::UIElement Render(rtom::IAdaptiveCardElement cardElement,
                                 rtrender::AdaptiveRenderContext renderContext,
                                 rtrender::AdaptiveRenderArgs renderArgs); 
    };

    ActivatableClass(AdaptiveContainerRenderer);
}
