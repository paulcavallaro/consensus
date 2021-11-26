#include "raft/server.h"

#include <grpcpp/grpcpp.h>

#include "raft/raft.grpc.pb.h"

namespace consensus {
namespace raft {

using grpc::ServerContext;
using grpc::Status;

Status RaftServer::RequestVote(ServerContext* context,
                               const RequestVote_Request* req,
                               RequestVote_Response* reply) {
  // TODO(paulcavallaro): Implement
  return Status::OK;
}

Status RaftServer::AppendEntries(ServerContext* context,
                                 const AppendEntries_Request* req,
                                 AppendEntries_Response* reply) {
  // TODO(paulcavallaro): Implement
  return Status::OK;
}

}  // namespace raft
}  // namespace consensus
