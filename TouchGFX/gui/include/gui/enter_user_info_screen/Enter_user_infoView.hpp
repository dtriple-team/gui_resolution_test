#ifndef ENTER_USER_INFOVIEW_HPP
#define ENTER_USER_INFOVIEW_HPP

#include <gui_generated/enter_user_info_screen/Enter_user_infoViewBase.hpp>
#include <gui/enter_user_info_screen/Enter_user_infoPresenter.hpp>

class Enter_user_infoView : public Enter_user_infoViewBase
{
public:
    Enter_user_infoView();
    virtual ~Enter_user_infoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ENTER_USER_INFOVIEW_HPP
