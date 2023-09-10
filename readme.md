1. Current design

   ![Plant UML](http://www.plantuml.com/plantuml/png/7Ssn3G8n30NGdYbWWRYdkegE6T0diP88stUo7R4-9wfNlYqIdalbSfjMPJM-ZimZxaIER-apntglOA-x9LkMkYjXA3UM3vI57bFu2KDd9qNaIUEOtQWA8bvjeZkq70BxHnjRE_q1.svg)

   The svg url is obtained from Using the following plantuml code in ![Plantuml](http://www.plantuml.com/plantuml/uml/).

   @startuml
   !include https://raw.githubusercontent.com/ahmedelkamel/FileManager/master/design/class_diagram.plantuml
   @enduml

   Note:
   - Make sure you have a url of the plantuml file in raw-format.
   - The .svg extension is added manually.
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
