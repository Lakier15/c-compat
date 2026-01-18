//! c-compat
//!
//! This crate's aim is to bring a one-stop solution to the problem of compiling/linking C libraries
//! (and therefore *-sys crates) by using the least amount of friction possible.
#![no_std]

mod math;
mod stdlib;
