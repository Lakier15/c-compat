use std::path::{Path, PathBuf};
use walkdir::WalkDir;

fn main() {
    // Paths
    let manifest_dir = Path::new(env!("CARGO_MANIFEST_DIR"));
    let out_dir = PathBuf::from(&std::env::var("OUT_DIR").unwrap());

    let includes = WalkDir::new(manifest_dir.join("headers"))
        .into_iter()
        .filter_map(|e| e.ok())
        .filter(|e| {
            matches!(
                e.path().extension().and_then(|os_str| os_str.to_str()),
                Some("h")
            )
        })
        .collect::<Vec<_>>();

    for include in includes {
        println!("cargo::rerun-if-changed={}", include.path().display());
        std::fs::copy(include.path(), out_dir.join(include.file_name()))
            .expect("Failed to copy include file");
    }

    // Export includes location for other crates that might need headers to compile C code
    println!("cargo:metadata=include={}", out_dir.display());
}
