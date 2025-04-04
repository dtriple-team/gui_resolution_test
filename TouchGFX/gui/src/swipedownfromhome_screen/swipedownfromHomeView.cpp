#include <gui/swipedownfromhome_screen/swipedownfromHomeView.hpp>
#include <gui/model/Model.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

#include <cstdlib>

#if !defined(gui_simulation)
#include "bl6133.h"
#endif

swipedownfromHomeView::swipedownfromHomeView()
	: toggleButton1ClickedCallback(this, &swipedownfromHomeView::toggleButton1Clicked), //test
	  toggleButton2ClickedCallback(this, &swipedownfromHomeView::toggleButton2Clicked),
	  slider1ChangedCallback(this, &swipedownfromHomeView::slider1ChangedHandler),
	  initialX(0), initialY(0)
{

}

void swipedownfromHomeView::setupScreen()
{
    swipedownfromHomeViewBase::setupScreen();
    haptic_togglebutton.setAction(toggleButton1ClickedCallback);
    sound_togglebutton.setAction(toggleButton2ClickedCallback);
    haptic_togglebutton.forceState(presenter->getToggleButton1State()); //test
    sound_togglebutton.forceState(presenter->getToggleButton2State()); //test
    slider1.setValue(presenter->getSlider1Value());
    slider1.setNewValueCallback(slider1ChangedCallback);
}

void swipedownfromHomeView::tearDownScreen()
{
    swipedownfromHomeViewBase::tearDownScreen();
}


void swipedownfromHomeView::handleSwipeUp()
{
    application().gotoHomeScreenWithBiodataScreenWipeTransitionSouth();
}

void swipedownfromHomeView::toggleButton1Clicked(const touchgfx::AbstractButton& source)
{
    bool newState = haptic_togglebutton.getState();
    presenter->updateToggleButton1State(newState);
    uint8_t hapticFlag = 0;
#if !defined(gui_simulation)
    ehg.hapticFlag = !ehg.hapticFlag;
#endif
    hapticFlag = !hapticFlag;
}

void swipedownfromHomeView::updateToggleButton1State(bool state)
{
	haptic_togglebutton.forceState(state);
}

void swipedownfromHomeView::toggleButton2Clicked(const touchgfx::AbstractButton& source)
{
    bool newState = sound_togglebutton.getState();
    presenter->updateToggleButton2State(newState);
    uint8_t soundFlag = 0;
#if !defined(gui_simulation)
    soundFlag = ehg.soundFlag;
#endif
    soundFlag = !soundFlag;
}

void swipedownfromHomeView::updateToggleButton2State(bool state)
{
	sound_togglebutton.forceState(state);
}

void swipedownfromHomeView::slider1ChangedHandler(const Slider& src, int value)
{
    presenter->updateSlider1Value(value);
#if !defined(gui_simulation)
    ehg.set_bLevel = value/6.67+1;
    ehg.before_bLevel = ehg.set_bLevel;
#endif
}

#if defined(gui_simulation)
void swipedownfromHomeView::handleGestureEvent(const GestureEvent& evt)
{
	int deltaX = 0, deltaY = 0;
	const int swipeThreshold = 20;

    if (evt.getType() == GestureEvent::SWIPE_VERTICAL)
    {
        deltaY = evt.getVelocity();
    }
    if (evt.getType() == GestureEvent::SWIPE_HORIZONTAL)
    {
    	deltaX = evt.getVelocity();
    }

    if (evt.getType() == GestureEvent::SWIPE_VERTICAL && abs(deltaY)>abs(deltaX))
    {

    	if(abs(deltaY) > swipeThreshold)
		{
			if (deltaY < -20)
			{
				presenter->notifySwipeUp();
			}
		}
    }
    swipedownfromHomeViewBase::handleGestureEvent(evt);
}
#else
void swipedownfromHomeView::handleDragEvent(const DragEvent& evt)
{
	int deltax = std::abs(evt.getDeltaX());
	int deltay = std::abs(evt.getDeltaY());
	if(deltay > deltax){
		isDeltaYGreaterThanDeltaX = 1;
	} else {
		isDeltaYGreaterThanDeltaX = 0;
	}
    swipedownfromHomeViewBase::handleDragEvent(evt);
}

void swipedownfromHomeView::handleTickEvent(){
	if(gesture == SlideUp){
	    gesture = None;
		presenter->notifySwipeUp();
	}
}
#endif
