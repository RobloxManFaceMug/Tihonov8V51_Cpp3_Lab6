#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Shapes.h"

class Document {
    public:
        Document() {
            std::cout << "Document created" << std::endl;
        }

        void ImportFromFile(std::string filename) {
            std::cout << "imported from " << filename << std::endl;
        }

        void ExportFromFile(std::string filename) {
            std::cout << "exported from" << filename << std::endl;
        }

        void AddShape(std::shared_ptr<Shapes> shape) {
            ShapesList.push_back(shape);
            std::cout << "shape added" << std::endl;
        }

        void DeleteShape() {
            ShapesList.pop_back();
            std::cout << "shape removed" << std::endl;
        }

        std::vector< std::shared_ptr<Shapes> > GetShapeList() {
            return ShapesList;
        }

    private:
        std::vector< std::shared_ptr<Shapes> > ShapesList;
};