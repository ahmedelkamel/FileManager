#ifndef DEVICE_HPP
#include "resource.hpp"
#include <memory>

namespace filesystem {
class Device : public Resource{
public:
  Device(std::uint32_t const index);
  ~Device() = default;
  std::uint32_t get_index() const override;

private:
  std::uint32_t m_index;
};

} // namespace filesystem

#endif // DEVICE_HPP