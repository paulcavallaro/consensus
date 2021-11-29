load("@rules_proto//proto:defs.bzl", "proto_library")
load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")

proto_library(
    name = "raft_proto",
    srcs = [
        "raft.proto",
    ],
)

cc_proto_library(
    name = "raft_cc_proto",
    deps = [
        ":raft_proto",
    ],
)

cc_grpc_library(
    name = "raft_cc_grpc",
    srcs = [
        ":raft_proto",
    ],
    grpc_only = True,
    deps = [
        ":raft_cc_proto",
    ],
)

cc_library(
    name = "server",
    srcs = [
        "server.cc",
    ],
    hdrs = [
        "server.h",
    ],
    deps = [
        ":raft_cc_grpc",
        ":raft_cc_proto",
        "@com_github_grpc_grpc//:grpc++",
    ],
)
