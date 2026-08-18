# Codebase Architecture

Overview of the Windissect PE/PDB extraction pipeline and module structure.

## Modules

| Module | Description | Entrypoints |
|---|---|---|
| [`main.rs`](../src/main.rs) | CLI entrypoint (`extract`, `emit-cpp`, `emit-headers`, `emit-rust`, `classes`, `verify`, `doc`). | `main()` |
| [`extract.rs`](../src/extract.rs) | PE export reader (`goblin`) and PDB GUID extractor. | `from_pe()` |
| [`pdbsym.rs`](../src/pdbsym.rs) | PDB symbol iterator (`pdb` crate) for internal functions. | `read()` |
| [`demangle.rs`](../src/demangle.rs) | MSVC demangler (`msvc-demangler`) and function classifier. | `demangle()`, `parse_decl()`, `classify()` |
| [`typeparse.rs`](../src/typeparse.rs) | C++ type parser (builtins, pointers, templates, function pointers). | `parse()`, `type_text()` |
| [`model.rs`](../src/model.rs) | IR data models (`Symbol`, `Signature`, `Database`). | `Database`, `Symbol` |
| [`emit.rs`](../src/emit.rs) | C++ header generator. | `cpp_class()`, `emit_all_headers()` |
| [`emit_rust.rs`](../src/emit_rust.rs) | Rust FFI bindings crate generator. | `generate_crate()` |
| [`verify.rs`](../src/verify.rs) | IR validation suite. | `run()` |
| [`docs.rs`](../src/docs.rs) | Documentation generator. | `generate_all()` |

---

## Detailed Module Overview

### 1. `main.rs`
Handles CLI arguments using `clap` and dispatches subcommands (`extract`, `verify`, `emit-headers`, `emit-rust`, etc.).

### 2. `extract.rs` & `pdbsym.rs`
Parses PE exports using `goblin` and merges identity-matched public and private functions from Microsoft PDBs.

### 3. `demangle.rs` & `typeparse.rs`
Demangles MSVC symbols and parses C++ function declarations into structured types (return type, class, method name, parameters, calling convention).

### 4. `model.rs`
Defines the serialized IR (`ir/symbols.json`).

### 5. `emit.rs` & `emit_rust.rs`
Generates C++ headers and a target-specific buildable Rust FFI crate.

### 6. `verify.rs`
Validates that generated IR matches schema rules and ground-truth method signatures.
