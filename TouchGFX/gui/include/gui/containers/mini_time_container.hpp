#ifndef MINI_TIME_CONTAINER_HPP
#define MINI_TIME_CONTAINER_HPP

#include <gui_generated/containers/mini_time_containerBase.hpp>

class mini_time_container : public mini_time_containerBase
{
public:
    mini_time_container();
    virtual ~mini_time_container() {}

    virtual void initialize();
protected:
};

#endif // MINI_TIME_CONTAINER_HPP
