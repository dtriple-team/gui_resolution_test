#include <gui/temphome_screen/tempHomeView.hpp>
#include <gui/temphome_screen/tempHomePresenter.hpp>

tempHomePresenter::tempHomePresenter(tempHomeView& v)
    : view(v)
{

}

void tempHomePresenter::activate()
{

}

void tempHomePresenter::deactivate()
{

}

void tempHomePresenter::home_screen_display()
{
  view.changeToHomeScreen();
}

