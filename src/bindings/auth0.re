type hook;
[@bs.module "@auth0/auth0-react"] external useAuth0: unit => hook = "useAuth0";

[@bs.send] external loginWithRedirect: hook => unit = "loginWithRedirect";
[@bs.send] external logout: hook => unit = "logout";

[@bs.val] [@bs.scope ("window", "location")]
external origin: string = "origin";

module Auth0Provider = {
  type auth_param = {redirect_uri: string};
  [@bs.module "@auth0/auth0-react"] [@react.component]
  external make:
    (
      ~domain: string,
      ~clientId: string,
      ~authorizationParams: auth_param,
      ~children: React.element
    ) =>
    React.element =
    "Auth0Provider";
};
