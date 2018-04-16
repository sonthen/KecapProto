open BsReactNative;

module Styles = {
  open Style;
  let showCaseContainer = style([flex @@ 1., justifyContent @@ Center]);
  let buttonStyle =
    style([
      backgroundColor @@ "#DB4D3F",
      width @@ Pt(300 |> float),
      height @@ Pt(45.),
      borderColor @@ "transparent",
      borderWidth @@ 0.,
      borderRadius @@ 5.,
    ]);
};

let component = ReasonReact.statelessComponent("ShowCase");

let make = (~navigation: ReactNavigation.Navigation.t, _children) => {
  ...component,
  render: _self =>
    <View style=Style.(style([flex @@ 1., backgroundColor @@ "#2f2f2f"]))>
      <View
        style=Style.(
                flatten([|
                  GlobalStyles.container,
                  style([
                    backgroundColor @@ "#2f2f2f",
                    justifyContent @@ SpaceAround,
                    marginVertical @@ Pt(290.),
                  ]),
                |])
              )>
        <Elements.Button
          buttonStyle=Styles.buttonStyle
          title="Card Sowcase"
          onPress=(
            _e =>
              ReactNavigation.Navigation.(
                navigate(
                  navigation,
                  createNavigateParams(~routeName=Routes.ShowCase.card, ()),
                )
              )
          )
        />
        <Elements.Button buttonStyle=Styles.buttonStyle title="Homepage" />
        <Elements.Button
          buttonStyle=Styles.buttonStyle
          title="Button Showcase"
        />
      </View>
    </View>,
};