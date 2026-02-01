# c-compat

[![Latest version](https://img.shields.io/crates/v/c-compat.svg)](https://crates.io/crates/c-compat)
[![Documentation](https://docs.rs/c-compat/badge.svg)](https://docs.rs/c-compat)
![License](https://img.shields.io/crates/l/c-compat.svg)

c-compat is crate which aims to solve the problem of requiring installing vendor toolchains/sysroots in order to
compile and integrate C libraries in Rust code for different targets. The crate brings a one-stop solution that
combines: existing Rust crates (like `libm` or `tinyrlibc`), a set of Rust compiled symbols, and a set of headers that
can be used as includes to compile C libraries in `*-sys`
when using `cc` or `bindgen`.

All of this allows:

* The ability to compile C libraries without worrying about different toolchains. The headers are written in sucha a way
  to leverage the `clang` builtins and its ability to easily support different targets (which is particularly important
  for embedded targets)
* To have available the usual libc symbols, when linking the main binary.

### Examples

Coming soon

### License

<sup>
Licensed under either of <a href="LICENSE-APACHE">Apache License, Version
2.0</a> or <a href="LICENSE-MIT">MIT license</a> at your option.
</sup>

<br>

<sub>
Unless you explicitly state otherwise, any contribution intentionally submitted
for inclusion in this crate by you, as defined in the Apache-2.0 license, shall
be dual licensed as above, without any additional terms or conditions.
</sub>