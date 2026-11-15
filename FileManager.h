#include <iostream>
#include <string>
#include "Document.h"

class FileManager {
    public:
        void createDocument() {
            std::cout << "document created" << std::endl;
            doc = std::make_shared<Document>();
        }

        void ImportDocument(std::string filename) {
            std::cout << filename << " imported" << std::endl;
            doc->ImportFromFile(filename);
        }

        void ExportDocument(std::string filename) {
            std::cout << filename << " exported" << std::endl;
            doc->ExportFromFile(filename);
        }

    private:
        std::shared_ptr<Document> doc;
};