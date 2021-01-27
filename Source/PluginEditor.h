/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class ExciterAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    ExciterAudioProcessorEditor (ExciterAudioProcessor&);
    ~ExciterAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    ExciterAudioProcessor& audioProcessor;
    
    std::unique_ptr<Slider> frequencySlider, exciterSlider;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ExciterAudioProcessorEditor)
};
