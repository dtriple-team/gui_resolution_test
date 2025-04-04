#ifndef SCREENONTIMESETTINGVIEW_HPP
#define SCREENONTIMESETTINGVIEW_HPP

#include <gui_generated/screenontimesetting_screen/screenontimeSettingViewBase.hpp>
#include <gui/screenontimesetting_screen/screenontimeSettingPresenter.hpp>
#include <touchgfx/Unicode.hpp>

class screenontimeSettingView : public screenontimeSettingViewBase
{
public:
    screenontimeSettingView();
    virtual ~screenontimeSettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void handleSwipeRight();

    virtual void scrollWheel1UpdateItem(setting_screenontime_notselected& item, int16_t itemIndex);
    virtual void scrollWheel1UpdateCenterItem(setting_screenontime_selected& item, int16_t itemIndex);

#if defined(gui_simulation)
    virtual void handleGestureEvent(const GestureEvent& evt);
#else
    virtual void changeScreenOnTime();
    virtual void handleTickEvent();
#endif

protected:
    Callback<screenontimeSettingView, int16_t>scrollWheel1AnimateToCallback;
    void scrollWheel1AnimateToHandler(int16_t item);

private:
    int initialX;
    int initialY;
};

#endif // SCREENONTIMESETTINGVIEW_HPP
