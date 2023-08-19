1. class Resource
2. class ResourceManager
    1. Initially std::vector<Resource::Ptr> resource_table: Implement this for now
    2. Then std::vector<List<Resource>>     resource_table: Vector of linkedlist (bucket) serving as a hashmap
3. Interaction
    - Application requests resource #i from ResourceManager
    - RM creates a resource if it is not allocated.
    - RM returns a shared pointer to the resource.
    - Once no pointers reference the Resource, it is released
        Test: shared_ptr<T>::use_count() is zero
    - Resource::~Resource() the destructor releases the resource
