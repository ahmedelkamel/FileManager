#include "device.hpp"

namespace filesystem {

Device::Device(const std::uint32_t index) : m_index(index) {}

std::uint32_t Device::get_index() const { return m_index; }
} // namespace filesystem
