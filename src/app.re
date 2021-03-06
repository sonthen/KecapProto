/* open BsReactNative; */
/*
 module Styles = {
   open GlobalStyles;
   open Style;
   let container = flatten([|flex1, style([backgroundColor @@ "#2f2f2f"])|]);
 }; */
module Nav = {
  let component = ReasonReact.statelessComponent("Nav");
  let make = _children => {
    ...component,
    render: _children =>
      ReactNavigation.(
        <StackNavigator
          routes=(
            RouteConfig.create([
              (
                Routes.showCaseMenu,
                RouteConfig.route(
                  ~screen=
                    props => <ShowCaseMenu navigation=props##navigation />,
                  ~path="/",
                  (),
                ),
              ),
              (
                Routes.login,
                RouteConfig.route(
                  ~screen=props => <Login navigation=props##navigation />,
                  ~path="/login",
                  (),
                ),
              ),
              (
                Routes.ShowCase.card,
                RouteConfig.route(
                  ~screen=_props => <CardShowCase />,
                  ~path="/cardshowcase",
                  (),
                ),
              ),
              (
                Routes.ShowCase.avatar,
                RouteConfig.route(
                  ~screen=_props => <AvatarShowCase />,
                  ~path="/avatarshowcase",
                  (),
                ),
              ),
            ])
          )
          config=(
            StackNavigatorConfig.create(
              ~initialRouteName=Routes.showCaseMenu,
              ~headerMode=HeaderMode.Screen,
              (),
            )
          )
        />
      ),
  };
};

let app = () => <Nav />;