import QtQuick 2.0
import QtQuick.Controls 2.0
Rectangle{
    id: rootItem
    width: 200
    height: 150
    color: "lightblue"
    signal qmlSignal(string msg)
    Button{
        id: btn1
        anchors.centerIn: rootItem
        width: 100
        height:50
        onClicked: rootItem.qmlSignal("Hello from qml")
    }
}
