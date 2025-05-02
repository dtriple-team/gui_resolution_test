#ifndef MEASURE_HRVIEW_HPP
#define MEASURE_HRVIEW_HPP

#include <gui_generated/measure_hr_screen/Measure_hrViewBase.hpp>
#include <gui/measure_hr_screen/Measure_hrPresenter.hpp>

class Measure_hrView : public Measure_hrViewBase
{
public:
    Measure_hrView();
    virtual ~Measure_hrView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MEASURE_HRVIEW_HPP
