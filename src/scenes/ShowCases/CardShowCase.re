open BsReactNative;

let component = ReasonReact.statelessComponent("CardShowCase");

let make = _children => {
  ...component,
  render: _self =>
    <ScrollView horizontal=true>
      <Elements.Card
        title="hi this is it"
        image=(
          Image.URI(
            Image.imageURISource(
              ~uri=
                "https://i.pinimg.com/736x/a6/a8/1c/a6a81c805d682e3fd2236aa129174fa7--cute-stuff-random-stuff.jpg",
              (),
            ),
          )
        )>
        <Text style=Style.(style([marginBottom @@ Pt(0.)]))>
          (
            "The idea with React Native Elements is more about component structure than actual design. "
            |> ReasonReact.stringToElement
          )
        </Text>
        <Elements.Button
          buttonStyle=Style.(
                        style([
                          backgroundColor @@ "#03A9F4",
                          borderRadius @@ 0.,
                          marginLeft @@ Pt(0.),
                          marginRight @@ Pt(0.),
                          marginBottom @@ Pt(0.),
                        ])
                      )
          title="View Now"
        />
      </Elements.Card>
      <Elements.Card
        title="hi this is it"
        image=(
          Image.URI(
            Image.imageURISource(
              ~uri=
                "https://i.pinimg.com/736x/a6/a8/1c/a6a81c805d682e3fd2236aa129174fa7--cute-stuff-random-stuff.jpg",
              (),
            ),
          )
        )
      />
      <Elements.Card
        title="hi this is it"
        image=(
          Image.URI(
            Image.imageURISource(
              ~uri=
                "https://i.pinimg.com/736x/a6/a8/1c/a6a81c805d682e3fd2236aa129174fa7--cute-stuff-random-stuff.jpg",
              (),
            ),
          )
        )
      />
      <Elements.Card
        title="hi this is it"
        image=(
          Image.URI(
            Image.imageURISource(
              ~uri=
                "https://i.pinimg.com/736x/a6/a8/1c/a6a81c805d682e3fd2236aa129174fa7--cute-stuff-random-stuff.jpg",
              (),
            ),
          )
        )
      />
      <Elements.Card
        title="hi this is it"
        image=(
          Image.URI(
            Image.imageURISource(
              ~uri=
                "https://i.pinimg.com/736x/a6/a8/1c/a6a81c805d682e3fd2236aa129174fa7--cute-stuff-random-stuff.jpg",
              (),
            ),
          )
        )
      />
    </ScrollView>,
};