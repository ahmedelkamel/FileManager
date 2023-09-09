#ifndef I_FILE_HPP
#define I_FILE_HPP

#include <memory>
#include <vector>

namespace filesystem {
class IFile {
public:
  using Ptr = std::shared_ptr<IFile>;
  using Ptrc = std::shared_ptr<IFile const>;

  virtual ~IFile() = default;
  virtual std::uint32_t get_file_id() const = 0;
  virtual std::vector<std::uint8_t> read(const std::uint32_t data_size) = 0;
  virtual bool write(const std::vector<std::uint8_t>& data) = 0;
};

} // namespace filesystem

#endif // I_FILE_HPP
