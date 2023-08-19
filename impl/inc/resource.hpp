#ifndef RESOURCE_HPP
#include <memory>

namespace filesystem {
class Resource {
public:
  using Ptr = std::shared_ptr<Resource>;
  using Ptrc = std::shared_ptr<Resource const>;

  Resource(std::uint32_t const index);
  ~Resource() = default;
  std::uint32_t get_index() const;

private:
  std::uint32_t m_index;
};

} // namespace filesystem

#endif // RESOURCE_HPP