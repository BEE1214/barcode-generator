from conans import ConanFile, tools
from conan.tools.cmake import CMake, CMakeToolchain

class BarcodeGenerator(ConanFile):
    name = "BarcodeGenerator"
    version = tools.load(".version")
    revision_mode = "scm"
    description = "Program for generating and exporting barcodes"
    homepage = "https://github.com/BEE1214/barcode-generator"
    url = "https://github.com/BEE1214/barcode-generator"
    license = "Proprietary"
    generators = ("CMakeToolchain", "CMakeDeps")
    settings = ("os", "compiler", "arch", "build_type")
    exports = (
        ".version",
    )
    exports_sources = (
        "include/*",
        "src/**",
        "CMakeLists.txt",
    )
    requires = (
        "qtxlsxwriter/0.3.0",
        "qt/5.15.9",
        "zint/2.10.0",
        "spdlog/1.8.5",
        "nlohmann_json/3.10.5",
        "libpng/1.6.38",
    )

    options = {
        "shared": [True, False],
        "fPIC": [True, False],
    }

    default_options = {
        "shared": False,
        "fPIC": True,
    }

    def build(self):
        cmake = CMake(self)

        cmake.configure()
        cmake.build()
