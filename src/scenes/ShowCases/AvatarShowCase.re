open BsReactNative;

let str = ReasonReact.stringToElement;

let component = ReasonReact.statelessComponent("AvatarShowCase");

let make = _children => {
  ...component,
  render: _self => <Elements.Avatar rounded=true />,
};