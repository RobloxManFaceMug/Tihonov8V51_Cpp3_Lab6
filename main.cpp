#include <iostream>
#include <string>
#include "Shapes.h"
#include "FileManager.h"
#include "Render.h"

void GUIAddShape(Document document, std::shared_ptr<Shapes> shape) {
    document.AddShape(shape);
}

void GUIRemoveShape(Document document) {
    document.DeleteShape();
}

void GUIImportDoc(FileManager Manager, std::string filename) {
    Manager.ImportDocument(filename);
}

void GUIExportDoc(FileManager Manager, std::string filename) {
    Manager.ExportDocument(filename);
}

void GUICreateDoc(FileManager Manager) {
    Manager.createDocument();
}

int main(int, char**){
    std::cout << "among shapes";
}
