#ifndef SKINTEMP_PERMINVIEW_HPP
#define SKINTEMP_PERMINVIEW_HPP

#include <gui_generated/skintemp_permin_screen/Skintemp_perminViewBase.hpp>
#include <gui/skintemp_permin_screen/Skintemp_perminPresenter.hpp>

class Skintemp_perminView : public Skintemp_perminViewBase
{
public:
    Skintemp_perminView();
    virtual ~Skintemp_perminView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SKINTEMP_PERMINVIEW_HPP
