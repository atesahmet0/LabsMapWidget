#pragma once

#include <QWidget>

namespace cl
{
    namespace map
    {
        class LabsMapItem : public QWidget
        {
            Q_OBJECT

        public:
            explicit LabsMapItem(QWidget *parent = nullptr) : QWidget(parent) {}
            virtual ~LabsMapItem();
        private:
            Q_DISABLE_COPY(LabsMapItem)
        };
    } // namespace map
} // namespace labs