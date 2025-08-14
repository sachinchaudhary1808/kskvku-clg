{
  description = "A development shell with clang-tools using Nix flakes";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs =
    {
      self,
      nixpkgs,
    }:
    {
      devShells = {
        x86_64-linux.default = nixpkgs.legacyPackages.x86_64-linux.mkShell {
          buildInputs = with nixpkgs.legacyPackages.x86_64-linux; [
            clang-tools
          ];

          shellHook = ''
            echo "Development shell with clang-tools activated"
          '';
        };
      };
    };
}
