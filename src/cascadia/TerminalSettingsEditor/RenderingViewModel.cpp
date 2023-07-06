// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#include "pch.h"
#include "RenderingViewModel.h"
#include "CompatibilityViewModel.g.cpp"

using namespace winrt::Windows::Foundation;
using namespace winrt::Microsoft::Terminal::Settings::Model;

namespace winrt::Microsoft::Terminal::Settings::Editor::implementation
{
    CompatibilityViewModel::CompatibilityViewModel(Model::CascadiaSettings settings) noexcept :
        _settings{ std::move(settings) }
    {
    }
}
