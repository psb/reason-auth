[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  switch (url.path) {
  | ["profile"] =>
    <div className="container mx-auto max-w-md p-4"> <Profile /> </div>
  | _ => <div className="container mx-auto max-w-md p-4"> <Login /> </div>
  };
};
