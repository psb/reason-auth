[@react.component]
let make = () => {
  <div className="container mx-auto max-w-md p-4">
    <h1 className="mb-4 text-3xl">
      {React.string("Log in to view Barky's profile")}
    </h1>
    <p> {React.string("Email: barky@example.com")} </p>
    <p className="mb-4"> {React.string("Password: WoofWoof12345")} </p>
    <LoginButton />
  </div>;
};
