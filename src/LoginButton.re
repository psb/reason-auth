[@react.component]
let make = () => {
  let ua = Bindings.Auth0.useAuth0();

  <button
    className="py-2 px-4 rounded-md bg-blue-500 text-white"
    onClick={_ => Bindings.Auth0.loginWithRedirect(ua)}>
    {React.string("Log In")}
  </button>;
};
