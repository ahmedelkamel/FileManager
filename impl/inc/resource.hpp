#ifndef RESOURCE_HPP
#include <memory>

namespace filesystem {
class Resource {
public:
  using Ptr = std::shared_ptr<Resource>;
  using Ptrc = std::shared_ptr<Resource const>;

  virtual ~Resource() = default;
  virtual std::uint32_t get_index() const = 0;
};

} // namespace filesystem

#endif // RESOURCE_HPP