load("@rules_proto//proto:defs.bzl", "proto_library")

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
