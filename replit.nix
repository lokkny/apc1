{ pkgs }: {
	deps = [
   pkgs.moreutils
   pkgs.csslint
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}