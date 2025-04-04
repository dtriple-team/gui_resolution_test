#ifndef SLEEPSCREENPRESENTER_HPP
#define SLEEPSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SleepScreenView;

class SleepScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SleepScreenPresenter(SleepScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual void notifySwipeRight(); //rkdalfks

    virtual ~SleepScreenPresenter() {}

private:
    SleepScreenPresenter();

    SleepScreenView& view;
};

#endif // SLEEPSCREENPRESENTER_HPP
