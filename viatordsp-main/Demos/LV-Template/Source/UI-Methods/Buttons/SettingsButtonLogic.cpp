/*
  ==============================================================================

    SettingsButtonLogic.cpp
    Created: 21 May 2022 11:30:54pm
    Author:  Landon Viator

  ==============================================================================
*/

#include "../../UI-Components/HeaderComponent.h"

void HeaderComponent::settingsButtonProps()
{
    settingsButton.setClickingTogglesState(true);
    settingsButton.setColour(juce::TextButton::ColourIds::buttonColourId, juce::Colours::transparentBlack);
    settingsButton.setColour(juce::TextButton::ColourIds::buttonOnColourId, juce::Colours::transparentBlack);
    settingsButton.setColour(juce::ComboBox::ColourIds::outlineColourId, juce::Colours::whitesmoke);
    settingsButton.setLookAndFeel(&customSettingsButtonLAF);
    settingsButton.onClick = [this]()
    {
        getParentComponent()->resized();
    };
}
