[@react.component]
let make = () => {
  <>
    <h1 className="mb-4 text-3xl">
      {React.string("Log in to view Barky's profile")}
    </h1>
    <p> {React.string("Email: barky@example.com")} </p>
    <p className="mb-4"> {React.string("Password: WoofWoof12345")} </p>
    <LoginButton />
  </>;
};
