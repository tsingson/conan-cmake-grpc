protobuf_generate_grpc_cpp(GRPC_SRCS GRPC_HDRS helloworld/v1/helloworld.proto)

add_library(proto ${GRPC_SRCS} ${GRPC_HDRS})

target_include_directories(proto PUBLIC "${_gRPC_PROTO_GENS_DIR}")

target_link_libraries(proto
    gRPC::grpc++_unsecure
)
