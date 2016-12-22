#include "widget.h"
#include "form.h"
#include <QQuickView>
#include <QQuickItem>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize (800,900);
    QVBoxLayout *vbLayout1=new QVBoxLayout(this);
    QQuickView *view = new QQuickView();
    view->setSource(QUrl(QStringLiteral("qrc:/page1.qml")));
    view->setResizeMode (QQuickView::SizeRootObjectToView);
    QWidget *container = QWidget::createWindowContainer (view);
    container->setMinimumSize (200, 150);
    container->setFocusPolicy (Qt::TabFocus);
    QQuickView *view2 = new QQuickView();
    view2->setSource(QUrl(QStringLiteral("qrc:/page1.qml")));
    view2->setResizeMode (QQuickView::SizeRootObjectToView);
    QWidget *container2 = QWidget::createWindowContainer (view2);
    container2->setMinimumSize (200, 150);
    container2->setMaximumSize (800,600);
    container2->setFocusPolicy (Qt::TabFocus);

    vbLayout1->addWidget (container);
    vbLayout1->addWidget(container2);

    QWidget *widget3=new QWidget();
    Form *form1 = new Form(widget3);
    widget3->setMinimumSize (600,300);
    vbLayout1->addWidget (widget3,0,Qt::AlignCenter);

//    QObject *item = dynamic_cast<QObject*>(view->rootObject());
    QObject *item1 = view->rootObject();
    QObject::connect(item1, SIGNAL(qmlSignal(QString)), this, SLOT(re(QString)));
}

void Widget::re (QString text)
{
    qDebug("a");
}

Widget::~Widget()
{

}
