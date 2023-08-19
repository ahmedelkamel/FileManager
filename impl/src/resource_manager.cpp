#include "resource_manager.hpp"

namespace filesystem {

ResourceManager::ResourceManager()
    : m_resource_table(m_max_resources, nullptr) {}

Resource::Ptrc ResourceManager::get_resource(std::uint32_t index) {
  if (!m_resource_table[index]) {
    m_resource_table[index] = std::make_shared<Resource>(index);
  }
  return m_resource_table[index];
}

} // namespace filesystem
