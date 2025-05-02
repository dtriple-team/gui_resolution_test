#ifndef MEASURE_HRPRESENTER_HPP
#define MEASURE_HRPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Measure_hrView;

class Measure_hrPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Measure_hrPresenter(Measure_hrView& v);

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

    virtual ~Measure_hrPresenter() {}

private:
    Measure_hrPresenter();

    Measure_hrView& view;
};

#endif // MEASURE_HRPRESENTER_HPP
