#ifndef RESOURCE_MANAGER_HPP
#include "device.hpp"
#include <vector>

namespace filesystem {
class ResourceManager {
public:
  ResourceManager();
  ~ResourceManager() = default;
  Resource::Ptr get_resource(std::uint32_t index);

private:
  std::uint32_t m_max_resources{128u};
  std::vector<Resource::Ptr> m_resource_table;
};

} // namespace filesystem

#endif // RESOURCE_MANAGER_HPP
