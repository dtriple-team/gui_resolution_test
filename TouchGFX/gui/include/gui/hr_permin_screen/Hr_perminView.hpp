#ifndef HR_PERMINVIEW_HPP
#define HR_PERMINVIEW_HPP

#include <gui_generated/hr_permin_screen/Hr_perminViewBase.hpp>
#include <gui/hr_permin_screen/Hr_perminPresenter.hpp>

class Hr_perminView : public Hr_perminViewBase
{
public:
    Hr_perminView();
    virtual ~Hr_perminView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HR_PERMINVIEW_HPP
