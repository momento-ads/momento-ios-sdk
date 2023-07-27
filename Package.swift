// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Momento_iOS",
    platforms: [
        .iOS(.v11),
    ],
    products: [
        .library(name: "Momento_iOS", targets:["Momento_iOS"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(name: "Momento_iOS", path: "Momento_iOS.xcframework")
    ]
)
