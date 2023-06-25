#include "app.hpp"
#include "router.hpp"
#include "routes.hpp"
#include <iostream>
#include <vector>

int main()
{
  auto routes { getRoutes() };
  auto router { Router(routes) };

  App app { App(router) };
  return app.run();
}
