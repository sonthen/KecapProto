open BsReactNative;

let component = ReasonReact.statelessComponent("CardShowCase");

let make = _children => {
  ...component,
  render: _self =>
    <View style=Style.(style([flex @@ 1.]))>
      <View style=Style.(style([flex @@ 3., alignItems @@ Center]))>
        <Text style=Style.(style([fontSize @@ Float(40.)]))>
          ("What Do You Want To Learn Today ?" |> ReasonReact.stringToElement)
        </Text>
      </View>
      <View style=Style.(style([flex @@ 7.]))>
        <ScrollView>
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
        </ScrollView>
      </View>
    </View>,
};