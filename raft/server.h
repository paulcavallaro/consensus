#include <grpcpp/grpcpp.h>

#include "raft/raft.grpc.pb.h"

namespace consensus {
namespace raft {

class RaftServer final : public RaftService::Service {
  grpc::Status RequestVote(grpc::ServerContext* context,
                           const RequestVote_Request* req,
                           RequestVote_Response* reply) override;

  grpc::Status AppendEntries(grpc::ServerContext* context,
                             const AppendEntries_Request* req,
                             AppendEntries_Response* reply) override;
};

}  // namespace raft
}  // namespace consensus
