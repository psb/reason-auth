open Bindings;

[@react.component]
let make = () => {
  let ua = Auth0.useAuth0();

  let card = user =>
    <div className="mb-2 border-2 rounded-md">
      <img src="/dog.jpg" alt="dog" className="mx-auto" />
      <h2 className="p-2 text-xl">
        {React.string("Name: " ++ Auth0.name(user))}
      </h2>
      <h3 className="p-2 text-lg">
        {React.string("Nickname: " ++ Auth0.nickname(user))}
      </h3>
      <div className="p-2">
        {React.string("email verified: ")}
        {Auth0.emailVerified(user)
           ? <span className="text-green-500">
               {React.string({js|\u2713|js})}
             </span>
           : <span className="text-red-500">
               {React.string({js|\u274C|js})}
             </span>}
      </div>
    </div>;

  if (Auth0.isLoading(ua)) {
    <div> {React.string("Loading...")} </div>;
  } else {
    Auth0.isAuthenticated(ua)
      ? {
        <>
          {let user = Auth0.user(ua);
           card(user)}
          <div className="mb-2 text-sm text-right">
            {React.string("Photo by ")}
            <a
              href="https://unsplash.com/@charlesdeluvio?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">
              {React.string("charlesdeluvio ")}
            </a>
            {React.string("on ")}
            <a
              href="https://unsplash.com/photos/K4mSJ7kc0As?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">
              {React.string("Unsplash")}
            </a>
          </div>
          <LogoutButton />
        </>;
      }
      : <a href="/" className="py-2 px-4 rounded-md bg-slate-500 text-white">
          {React.string("Log in to view profile")}
        </a>;
  };
};
