# Reason Auth

This is a basic app that shows you how you can use [Auth0](https://auth0.com/) authentication with [Reason](https://reasonml.github.io/en) and [Reason React](https://reasonml.github.io/reason-react/en). The app uses the Auth0 react component and has bindings to the component. The project uses [Melange](https://melange.re/v1.0.0/) to transform the Reason code to JS.

This project is deployed at: https://reason-auth.netlify.app/

An accompanying blog post about using auth and 3rd party react components with ReasonReact can be found [here]()

## Quick Start

```shell
make init

# In separate terminals:
make watch
make dev
```

## React

React support is provided by [`reason-react`](https://github.com/reasonml/reason-react/). The entry point of the app is [`src/Index.re`](src/Index.re).

## JavaScript output

`_build/default/src/output/src/Index.js` in `index.html` is used as the entry point for Vite.

## Commands

You can see all available commands by running `make help` or just `make`. Here
are a few of the most useful ones:

- `make init`: set up opam local switch and download OCaml, Melange and
  JavaScript dependencies
- `make install`: install OCaml, Melange and JavaScript dependencies
- `make watch`: watch for the filesystem and have Melange rebuild on every
  change
- `make dev`: serve the JS application with a local HTTP server
- `make bundle`: create production build of app
- `make preview`: serve the production build of the JS application with a local HTTP server

## Project Structure

```sh
/
├── _build/
├── public/
│   ├── index.css
│   └── ...
├── src/
│   ├── dune
│   ├── bindings/
│   │   ├── auth0.re
│   │   └── dune
│   ├── Index.re
│   ├── Index.rei
│   └── ...
├── index.html
├── package.json
├── tailwind.config.js
├── <project_name>.opam
├── dune
├── dune-project
└── Makefile
```
