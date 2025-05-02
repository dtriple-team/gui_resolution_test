#ifndef MAIN_CONTAINER_HPP
#define MAIN_CONTAINER_HPP

#include <gui_generated/containers/main_containerBase.hpp>

class main_container : public main_containerBase
{
public:
    main_container();
    virtual ~main_container() {}

    virtual void initialize();
protected:
};

#endif // MAIN_CONTAINER_HPP
