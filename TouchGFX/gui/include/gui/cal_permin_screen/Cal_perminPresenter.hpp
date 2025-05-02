#ifndef CAL_PERMINPRESENTER_HPP
#define CAL_PERMINPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Cal_perminView;

class Cal_perminPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Cal_perminPresenter(Cal_perminView& v);

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

    virtual ~Cal_perminPresenter() {}

private:
    Cal_perminPresenter();

    Cal_perminView& view;
};

#endif // CAL_PERMINPRESENTER_HPP
