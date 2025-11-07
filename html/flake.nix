{
  description = "webdev";

  inputs = { nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable"; };

  outputs = { self, nixpkgs, }: {
    devShells = {
      x86_64-linux.default = nixpkgs.legacyPackages.x86_64-linux.mkShellNoCC {
        buildInputs = with nixpkgs.legacyPackages.x86_64-linux; [ live-server ];

        shellHook = ''
          echo "go code coco!"
          export PATH=$PATH:./bin
        '';
      };
    };
  };
}
