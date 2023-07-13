import react from "@vitejs/plugin-react";
import resolve from "@rollup/plugin-node-resolve";
import basicSsl from "@vitejs/plugin-basic-ssl";

export default {
  plugins: [react(), resolve(), basicSsl()],
};
