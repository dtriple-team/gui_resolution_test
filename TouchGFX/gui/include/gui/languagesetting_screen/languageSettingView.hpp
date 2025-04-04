#ifndef LANGUAGESETTINGVIEW_HPP
#define LANGUAGESETTINGVIEW_HPP

#include <gui_generated/languagesetting_screen/languageSettingViewBase.hpp>
#include <gui/languagesetting_screen/languageSettingPresenter.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/Callback.hpp>

class languageSettingView : public languageSettingViewBase
{
public:
    languageSettingView();
    virtual ~languageSettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void handleSwipeRight();
    void updateLanguageSelection();

#if defined(gui_simulation)
    virtual void handleGestureEvent(const GestureEvent& evt);
#else
    virtual void handleTickEvent();
#endif
protected:

private:
    int initialX;
    int initialY;
};

#endif // LANGUAGESETTINGVIEW_HPP
