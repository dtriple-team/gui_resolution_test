#include <gui/languagesetting_screen/languageSettingView.hpp>
#if !defined(gui_simulation)
#include "bl6133.h"
#endif

languageSettingView::languageSettingView()
	: initialX(0), initialY(0)
{

}

void languageSettingView::setupScreen()
{
    languageSettingViewBase::setupScreen();

    updateLanguageSelection();
}

void languageSettingView::tearDownScreen()
{
    languageSettingViewBase::tearDownScreen();
}

void languageSettingView::handleSwipeRight()
{
    application().gotoSettingScreenScreenWipeTransitionWest();
}

void languageSettingView::updateLanguageSelection()
{
    if (Texts::getLanguage() == KOREAN)
    {
        radioButton1.setSelected(true);
        radioButton2.setSelected(false);
        radioButton3.setSelected(false);
    }
    else if (Texts::getLanguage() == GB)
    {
        radioButton1.setSelected(false);
        radioButton2.setSelected(true);
        radioButton3.setSelected(false);
    }
    else if (Texts::getLanguage() == SPANISH)
    {
        radioButton1.setSelected(false);
        radioButton2.setSelected(false);
        radioButton3.setSelected(true);
    }
    radioButton1.invalidate();
    radioButton2.invalidate();
    radioButton3.invalidate();
}

#if defined(gui_simulation)
void languageSettingView::handleGestureEvent(const GestureEvent& evt)
{
    if (evt.getType() == GestureEvent::SWIPE_HORIZONTAL)
    {
        int deltaX = evt.getVelocity();
        if (deltaX > 0)
        {
            presenter->notifySwipeRight();
        }
    }
    languageSettingViewBase::handleGestureEvent(evt);
}
#else
void languageSettingView::handleTickEvent()
{
    if (gesture == SlideRight)
    {
        presenter->notifySwipeRight();
    }
}
#endif
