/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
ExciterAudioProcessorEditor::ExciterAudioProcessorEditor (ExciterAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    frequencySlider = std::make_unique<Slider>();
    frequencySlider->setSliderStyle(Slider::Rotary);
    frequencySlider->setTextBoxStyle(Slider::TextBoxBelow, false, 60, 15);
    addAndMakeVisible(frequencySlider.get());
    
    exciterSlider = std::make_unique<Slider>();
    exciterSlider->setSliderStyle(Slider::Rotary);
    exciterSlider->setTextBoxStyle(Slider::TextBoxBelow, false, 60, 15);
    addAndMakeVisible(exciterSlider.get());
    
    setSize (500, 400);
}

ExciterAudioProcessorEditor::~ExciterAudioProcessorEditor()
{
}

//==============================================================================
void ExciterAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
}

void ExciterAudioProcessorEditor::resized()
{
    frequencySlider->setSize(100, 100);
    frequencySlider->setCentreRelative(0.3f, 0.5f);
    
    exciterSlider->setSize(100, 100);
    exciterSlider->setCentreRelative(0.6f, 0.5f);
    
}
