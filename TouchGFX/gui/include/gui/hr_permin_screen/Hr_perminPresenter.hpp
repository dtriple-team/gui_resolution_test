#ifndef HR_PERMINPRESENTER_HPP
#define HR_PERMINPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Hr_perminView;

class Hr_perminPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Hr_perminPresenter(Hr_perminView& v);

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

    virtual ~Hr_perminPresenter() {}

private:
    Hr_perminPresenter();

    Hr_perminView& view;
};

#endif // HR_PERMINPRESENTER_HPP
