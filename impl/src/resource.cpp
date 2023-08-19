#include "resource.hpp"

namespace filesystem {

Resource::Resource(std::uint32_t const index) : m_index(index) {}

std::uint32_t Resource::get_index() const { return m_index; }
} // namespace filesystem