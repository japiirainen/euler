{
  description = "euler development environment";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs = inputs @ { flake-parts, ... }:
    flake-parts.lib.mkFlake { inherit inputs; } {
      systems = [ "x86_64-linux" "aarch64-linux" "aarch64-darwin" "x86_64-darwin" ];

      perSystem =
        { config
        , self'
        , inputs'
        , pkgs
        , system
        , ...
        }:
        let
          name = "euler";
          version = "0.0.1";
        in
        {
          devShells.default = pkgs.mkShell {
            inputsFrom = [ self'.packages.default ];
          };

          packages = {
            default = pkgs.stdenv.mkDerivation {
              inherit version;
              pname = name;
              src = ./.;

              configurePhase = ''
              '';

              buildPhase = ''
                make
              '';

              installPhase = ''
                mkdir -p $out/bin
                mv main $out/bin/${name}
              '';
            };
          };
        };
    };
}
