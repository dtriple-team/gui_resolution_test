#include <gui/screenontimesetting_screen/screenontimeSettingView.hpp>
#include "texts/TextKeysAndLanguages.hpp"
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

#define INITIAL_SCREEN_ONTIME 20

#if !defined(gui_simulation)
#include "bl6133.h"
uint16_t local_screenOnTime = INITIAL_SCREEN_ONTIME;
#else
uint16_t local_screenOnTime = 0;
#endif

screenontimeSettingView::screenontimeSettingView()
	: scrollWheel1AnimateToCallback(this, &screenontimeSettingView::scrollWheel1AnimateToHandler),
	  initialX(0), initialY(0)
{

}

void screenontimeSettingView::setupScreen()
{
    screenontimeSettingViewBase::setupScreen();
    scrollWheel1.setAnimateToCallback(scrollWheel1AnimateToCallback);

    local_screenOnTime = INITIAL_SCREEN_ONTIME;
}

void screenontimeSettingView::tearDownScreen()
{
    screenontimeSettingViewBase::tearDownScreen();
}

void screenontimeSettingView::handleSwipeRight()
{
    application().gotoscreenSettingScreenWipeTransitionWest();
}

void screenontimeSettingView::scrollWheel1UpdateItem(setting_screenontime_notselected& item, int16_t itemIndex)
{
	item.setElements((itemIndex+1)*5);
}

void screenontimeSettingView::scrollWheel1UpdateCenterItem(setting_screenontime_selected& item, int16_t itemIndex)
{
	item.setElements((itemIndex+1)*5);
}

void screenontimeSettingView::scrollWheel1AnimateToHandler(int16_t item)
{
	local_screenOnTime = (item+1)*5;
}

#if defined(gui_simulation)
void screenontimeSettingView::handleGestureEvent(const GestureEvent& evt)
{
    if (evt.getType() == GestureEvent::SWIPE_HORIZONTAL)
    {
    	int deltaX = evt.getVelocity();
        //int deltaY = evt.getVelocityY();

        //if(abs(deltaX)>abs(deltaY))
        //{
			if (deltaX > 0)
			{
				presenter->notifySwipeRight();
			}
        //}
    }
    screenontimeSettingViewBase::handleGestureEvent(evt);
}
#else
void screenontimeSettingView::changeScreenOnTime(){
//	if(local_screenOnTime == 0){
//		// not normal event => screen on time == 0 => time = 20(default) init
//		local_screenOnTime = INITIAL_SCREEN_ONTIME;
//	}
	ehg.screenOnTime = (uint8_t)local_screenOnTime;
}

void screenontimeSettingView::handleTickEvent(){
	if(gesture == SlideRight){
	    gesture = None;
		presenter->notifySwipeRight();
	}
}
#endif

