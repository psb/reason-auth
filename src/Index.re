type root;
[@bs.module "react-dom/client"]
external createRoot: Dom.element => root = "createRoot";

[@bs.send] external render: (root, React.element) => unit = "render";

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

ReactDOM.querySelector("#root")
->(
    fun
    | Some(root) => {
        let app = createRoot(root);
        render(
          app,
          <Auth0Provider
            domain="dev-dj37pygvjwvaxjde.us.auth0.com"
            clientId="e6mvq0WBov5jSBW0clTFdAIXgbyyK4gv"
            authorizationParams={redirect_uri: origin}>
            <App />
          </Auth0Provider>,
        );
      }
    | None =>
      Js.Console.error(
        "Failed to start React: couldn't find the #root element",
      )
  );
