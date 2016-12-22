# Qml-Into-QWidget-With-Signal-Connection
Embed QML in QWidget. Then we can use QQuickView and QOpenGLContext together.

Some TIPS:
1. createWindowContainer. This function can warp a qml file into a QWidget.
2. Remeber to include <QQuickItem> in order to transform QQuickItem* into QObject*.
3. How to define a SIGNAL in a qml file and connect it with the slots in cpp.
