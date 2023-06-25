#ifndef APP_H
#define APP_H

#include "router.hpp"

class App {
  private:
  Router& router;

  public:
  App(Router& router);

  public:
  int run();
};

#endif
