#include "router.hpp"
#include <iostream>

std::vector<Route> getRoutes()
{
  return {
    Route("/auth/login", RouteMethod::POST, []() -> void {
      std::cout << "Hello World" << std::endl;
    }),
  };
}
