#ifndef SKINTEMP_PERMINPRESENTER_HPP
#define SKINTEMP_PERMINPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Skintemp_perminView;

class Skintemp_perminPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Skintemp_perminPresenter(Skintemp_perminView& v);

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

    virtual ~Skintemp_perminPresenter() {}

private:
    Skintemp_perminPresenter();

    Skintemp_perminView& view;
};

#endif // SKINTEMP_PERMINPRESENTER_HPP
