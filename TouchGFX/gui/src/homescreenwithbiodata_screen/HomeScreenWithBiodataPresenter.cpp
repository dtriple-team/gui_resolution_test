#include <gui/homescreenwithbiodata_screen/HomeScreenWithBiodataView.hpp>
#include <gui/homescreenwithbiodata_screen/HomeScreenWithBiodataPresenter.hpp>

HomeScreenWithBiodataPresenter::HomeScreenWithBiodataPresenter(HomeScreenWithBiodataView& v)
    : view(v)
{
}

void HomeScreenWithBiodataPresenter::activate()
{
    // Activate code
}

void HomeScreenWithBiodataPresenter::deactivate()
{
    // Deactivate code
}

void HomeScreenWithBiodataPresenter::notifySwipeDown() //rkdalfks
{
	view.handleSwipeDown();
}

void HomeScreenWithBiodataPresenter::notifySwipeLeft() //rkdalfks
{
	view.handleSwipeLeft();
}

void HomeScreenWithBiodataPresenter::notifySwipeRight() //rkdalfks
{
	view.handleSwipeRight();
}
