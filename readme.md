1. Current design

   ![Plant UML](http://www.plantuml.com/plantuml/svg/1S7R3O8X30RGLNG1-kuElhY0gV05Y6tvqqjSttFksxhKGBdSLkOL3oBdNvixLtqguFrOmhBreyHBCI1VLWYz4AUyuyd64qxAaN0QY3sDkd34UsoUpjekOSjI-GC0.svg)

   The svg url is obtained from Using the following plantuml code in ![Plantuml](http://www.plantuml.com/plantuml/uml/).

   @startuml
   https://github.com/ahmedelkamel/FileManager/blob/master/design/class_diagram.plantuml
   @enduml

   The .svg extension is added manually.
3. class File
4. class FileManager
    1. Initially std::vector<IFile::Ptr> m_files: Implement this for now
    2. Then std::vector<List<IFile>> m_files: Vector of linkedlist (bucket) serving as a hashmap
5. Interaction
    - Application requests file #i from FileManager
    - RM creates a file if it is not allocated.
    - RM returns a shared pointer to the file.
    - Once no pointers reference the File, it is released
        Test: shared_ptr<T>::use_count() is zero
    - File::~File() the destructor releases the file
