1. Current design

    ![Plant UML](http://www.plantuml.com/plantuml/svg/1S7R3O8X30RGLNG1-kuElhY0gV05Y6tvqqjSttFksxhKGBdSLkOL3oBdNvixLtqguFrOmhBreyHBCI1VLWYz4AUyuyd64qxAaN0QY3sDkd34UsoUpjekOSjI-GC0.svg)
2. class Resource
3. class ResourceManager
    1. Initially std::vector<Resource::Ptr> resource_table: Implement this for now
    2. Then std::vector<List<Resource>>     resource_table: Vector of linkedlist (bucket) serving as a hashmap
4. Interaction
    - Application requests resource #i from ResourceManager
    - RM creates a resource if it is not allocated.
    - RM returns a shared pointer to the resource.
    - Once no pointers reference the Resource, it is released
        Test: shared_ptr<T>::use_count() is zero
    - Resource::~Resource() the destructor releases the resource
