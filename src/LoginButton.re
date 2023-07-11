module Auth0 = {
  type hook;
  [@bs.module "@auth0/auth0-react"]
  external useAuth0: unit => hook = "useAuth0";

  [@bs.send] external loginWithRedirect: hook => unit = "loginWithRedirect";
};

[@react.component]
let make = () => {
  let ua = Auth0.useAuth0();
  <button
    className="py-2 px-4 rounded-md bg-blue-500 text-white"
    onClick={_ => Auth0.loginWithRedirect(ua)}>
    {React.string("Log In")}
  </button>;
};
