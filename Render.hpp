#include "Document.hpp"

class Render {
    public:
        virtual void Draw(std::shared_ptr<Document> docs);
};

class LogTsIntoConsole: public Render{
    public:
        void Draw(std::shared_ptr<Document> docs) override {
            std::cout << "rendering the document" << std::endl;
            for (auto shape : docs->GetShapeList()) {
                shape->Draw();
            }
        }
};