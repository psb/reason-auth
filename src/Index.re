type root;
[@bs.module "react-dom/client"]
external createRoot: Dom.element => root = "createRoot";

[@bs.send] external render: (root, React.element) => unit = "render";

ReactDOM.querySelector("#root")
->(
    fun
    | Some(root) => {
        let app = createRoot(root);
        render(
          app,
          <Bindings.Auth0.Auth0Provider
            domain="dev-dj37pygvjwvaxjde.us.auth0.com"
            clientId="e6mvq0WBov5jSBW0clTFdAIXgbyyK4gv"
            authorizationParams={redirect_uri: Bindings.Auth0.origin}>
            <App />
          </Bindings.Auth0.Auth0Provider>,
        );
      }
    | None =>
      Js.Console.error(
        "Failed to start React: couldn't find the #root element",
      )
  );
