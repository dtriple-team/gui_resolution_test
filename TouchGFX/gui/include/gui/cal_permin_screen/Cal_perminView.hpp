#ifndef CAL_PERMINVIEW_HPP
#define CAL_PERMINVIEW_HPP

#include <gui_generated/cal_permin_screen/Cal_perminViewBase.hpp>
#include <gui/cal_permin_screen/Cal_perminPresenter.hpp>

class Cal_perminView : public Cal_perminViewBase
{
public:
    Cal_perminView();
    virtual ~Cal_perminView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CAL_PERMINVIEW_HPP
