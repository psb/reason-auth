[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  <div className="container mx-auto max-w-md p-4">
    {switch (url.path) {
     | ["profile"] => <Profile />
     | _ => <Login />
     }}
  </div>;
};
