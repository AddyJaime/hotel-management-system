# Hotel Management (C++)

Simple C++ console project for managing hotel rooms. This repository contains a minimal `main.cpp` as a starting point.

## ✅ What it includes

- `main.cpp` — example entry point (hotel project).
- `Makefile` — build helper for quick compile/run.
- `.gitignore` — ignores build artifacts and IDE files.
- `.github/workflows/ci.yml` — GitHub Actions workflow that builds the project on push/PR.

## 🔧 Build & Run (macOS / Linux)

Using the provided Makefile:

```sh
# build
make

# run
./hotel

# clean
make clean
```

Or compile directly with g++:

```sh
g++ -std=c++17 -O2 -Wall main.cpp -o hotel
./hotel
```

## 📋 Contributing

1. Fork the repo
2. Create a topic branch
3. Open a pull request with a clear description

## 💡 Notes

- Consider adding a `LICENSE` file (MIT, Apache-2.0, etc.) if you want to open-source this project.
- The GitHub Actions workflow runs a simple build to make sure the project compiles on push/PR.

---

If you want, I can also add a `LICENSE` (MIT) and a more complete README with examples — tell me which license you prefer.
