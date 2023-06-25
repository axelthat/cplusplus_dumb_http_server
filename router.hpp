#ifndef ROUTER_H
#define ROUTER_H

#include <functional>
#include <string>
#include <vector>

enum RouteMethod {
  GET,
  POST,
  PATCH,
  DELETE
};

struct Route {
  std::string path;
  RouteMethod method;
  std::function<void()> controller;

  Route(std::string path, RouteMethod method, std::function<void()> controller)
      : path(path)
      , method(method)
      , controller(controller)
  {
  }
};

class Router {
  private:
  std::vector<Route>& routes;

  public:
  Router(std::vector<Route>& routes);
};

#endif