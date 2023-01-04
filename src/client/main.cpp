#include <grpcpp/grpcpp.h>
#include <helloworld.grpc.pb.h>

#include <iostream>
using namespace helloworld::v1;
int main() {
  const auto channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
  const auto stub = Greeter::NewStub(channel);
  grpc::ClientContext context;
  SayHelloRequest request;
  request.set_name("client_hw");
  SayHelloResponse reply;
  grpc::Status status = stub->SayHello(&context, request, &reply);

  if (status.ok()) {
    std::cout << "Status was ok: " << reply.message() << '\n';
  } else {
    std::cout << "Status was not ok: " << status.error_message() << '\n';
  }

  return 0;
}
