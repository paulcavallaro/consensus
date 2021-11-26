load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# rules_proto, protocol buffer support.
http_archive(
    name = "rules_proto",
    sha256 = "66bfdf8782796239d3875d37e7de19b1d94301e8972b3cbd2446b332429b4df1",
    strip_prefix = "rules_proto-4.0.0",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_proto/archive/refs/tags/4.0.0.tar.gz",
        "https://github.com/bazelbuild/rules_proto/archive/refs/tags/4.0.0.tar.gz",
    ],
)
load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")
rules_proto_dependencies()
rules_proto_toolchains()

# gRPC
http_archive(
    name = "com_github_grpc_grpc",
    sha256 = "b2f2620c762427bfeeef96a68c1924319f384e877bc0e084487601e4cc6e434c",
    urls = [
        "https://github.com/grpc/grpc/archive/refs/tags/v1.42.0.tar.gz",
    ],
    strip_prefix = "grpc-1.42.0",
)
load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")
grpc_deps()
load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")
grpc_extra_deps()

# Abseil LTS archive version 20210324.2
http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/refs/tags/20210324.2.zip"],
  strip_prefix = "abseil-cpp-20210324.2",
  sha256 = "1a7edda1ff56967e33bc938a4f0a68bb9efc6ba73d62bb4a5f5662463698056c",
)

# glog 0.5.0 release
http_archive(
  name = "com_github_google_glog",
  urls = ["https://github.com/google/glog/archive/refs/tags/v0.5.0.zip"],
  strip_prefix = "glog-0.5.0",
  sha256 = "21bc744fb7f2fa701ee8db339ded7dce4f975d0d55837a97be7d46e8382dea5a",
)

# gflags archive.
http_archive(
  name = "com_github_gflags_gflags",
  strip_prefix = "gflags-2.2.2",
  urls = [
    "https://mirror.bazel.build/github.com/gflags/gflags/archive/v2.2.2.tar.gz",
    "https://github.com/gflags/gflags/archive/v2.2.2.tar.gz",
  ],
)

# googltest archive.
http_archive(
  name = "com_github_google_googletest",
  strip_prefix = "googletest-90a443f9c2437ca8a682a1ac625eba64e1d74a8a",
  urls = ["https://github.com/google/googletest/archive/90a443f9c2437ca8a682a1ac625eba64e1d74a8a.zip"],
  sha256 = "6fb9a49ad77656c860cfdafbb3148a91f076a3a8bda9c6d8809075c832549dd4",
)

# Bazel toolchains
http_archive(
  name = "bazel_toolchains",
  urls = [
    "https://mirror.bazel.build/github.com/bazelbuild/bazel-toolchains/archive/bc09b995c137df042bb80a395b73d7ce6f26afbe.tar.gz",
    "https://github.com/bazelbuild/bazel-toolchains/archive/bc09b995c137df042bb80a395b73d7ce6f26afbe.tar.gz",
  ],
  strip_prefix = "bazel-toolchains-bc09b995c137df042bb80a395b73d7ce6f26afbe",
  sha256 = "4329663fe6c523425ad4d3c989a8ac026b04e1acedeceb56aa4b190fa7f3973c",
)

# GoogleTest/GoogleMock framework. Used by most unit-tests.
http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/b6cd405286ed8635ece71c72f118e659f4ade3fb.zip"],  # 2019-01-07
  strip_prefix = "googletest-b6cd405286ed8635ece71c72f118e659f4ade3fb",
  sha256 = "ff7a82736e158c077e76188232eac77913a15dac0b22508c390ab3f88e6d6d86",
)

# Google benchmark.
http_archive(
  name = "com_github_google_benchmark",
  urls = ["https://github.com/google/benchmark/archive/16703ff83c1ae6d53e5155df3bb3ab0bc96083be.zip"],
  strip_prefix = "benchmark-16703ff83c1ae6d53e5155df3bb3ab0bc96083be",
  sha256 = "59f918c8ccd4d74b6ac43484467b500f1d64b40cc1010daa055375b322a43ba3",
)
