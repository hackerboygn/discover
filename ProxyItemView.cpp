#include "ProxyItemView.h"
#include <QDebug>


ProxyItemView::ProxyItemView(TabViewWidget *widget, QWidget *parent) : QAbstractItemView(parent)
{
    this->widget = widget;
    this->widget->setModel((StreamTableModel *) this->model());
}

QRect ProxyItemView::visualRect(const QModelIndex &index) const
{
    return QRect();// QAbstractItemView::visualRect(index);
}

void ProxyItemView::scrollTo(const QModelIndex &index, QAbstractItemView::ScrollHint hint)
{
}

QModelIndex ProxyItemView::indexAt(const QPoint &point) const
{
    return QModelIndex();
}

void ProxyItemView::dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight)
{
    QAbstractItemView::dataChanged(topLeft, bottomRight);


}

void ProxyItemView::rowsInserted(const QModelIndex &parent, int start, int end)
{
    QAbstractItemView::rowsInserted(parent, start, end);
}

void ProxyItemView::rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end)
{
}

bool ProxyItemView::edit(const QModelIndex &index, QAbstractItemView::EditTrigger trigger, QEvent *event)
{
    return false;
}

QModelIndex ProxyItemView::moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers)
{
    return QModelIndex();//QAbstractItemView::moveCursor(cursorAction, modifiers);
}

QRegion ProxyItemView::visualRegionForSelection(const QItemSelection &selection) const
{
    return QRegion();//QAbstractItemView::visualRegionForSelection(selection);
}

void ProxyItemView::setSelection(const QRect &, QItemSelectionModel::SelectionFlags command)
{
    //qDebug() << "in setSelection()";
}

void ProxyItemView::selectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
    //qDebug() << "in selectionChanged()";

    //TODO: error checking on size
    this->widget->setSelectedRowIndex(selected.indexes().first());
}

void ProxyItemView::mousePressEvent(QMouseEvent *event)
{
}

bool ProxyItemView::isIndexHidden(const QModelIndex &index) const
{
    return false;
}

int ProxyItemView::verticalOffset() const
{
    return this->verticalOffset();
}

int ProxyItemView::horizontalOffset() const
{
    return this->horizontalOffset();
}

void ProxyItemView::scrollContentsBy(int dx, int dy)
{
}

void ProxyItemView::resizeEvent(QResizeEvent *event)
{
}

void ProxyItemView::paintEvent(QPaintEvent *event)
{
}

void ProxyItemView::mouseReleaseEvent(QMouseEvent *event)
{
}

void ProxyItemView::mouseMoveEvent(QMouseEvent *event)
{
}