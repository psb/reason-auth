type hook;
[@bs.module "@auth0/auth0-react"] external useAuth0: unit => hook = "useAuth0";

[@bs.send] external loginWithRedirect: hook => unit = "loginWithRedirect";
[@bs.send] external logout: hook => unit = "logout";

type user;
[@bs.get] external user: hook => user = "user";
[@bs.get] external name: user => string = "name";
[@bs.get] external nickname: user => string = "nickname";
[@bs.get] external email: user => string = "email";
[@bs.get] external emailVerified: user => bool = "email_verified";

[@bs.get] external isAuthenticated: hook => bool = "isAuthenticated";
[@bs.get] external isLoading: hook => bool = "isLoading";
