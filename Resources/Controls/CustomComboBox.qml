import QtQuick 2.12
import QtQuick.Window 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.12
import QtQuick.Shapes 1.0
import QtQml.Models 2.12

ComboBox {
    id: control
    Layout.fillWidth: true
    background: Rectangle {
        height: 29
        border.color: control.focus ? '#565E64' : '#BABFC4'
    }
    textRole: control.textRole
    valueRole: control.valueRole
    model: control.model
    delegate: ItemDelegate {
        id: delegate
        width: control.width
        padding: 5
        height: 25
        hoverEnabled: true
        highlighted: control.highlightedIndex === index
        contentItem: Text {
            text: modelData != null ? (control.textRole ? modelData[control.textRole] : modelData) : null
            font.family: ubuntuRegular.name
            font.pixelSize: 13
            color: hovered ? '#ffffff' : '#333333'
            verticalAlignment: Text.AlignVCenter
            renderType: Text.NativeRendering
        }
        background: Rectangle {
            color: delegate.hovered ? '#6c757d' : 'transparent'
        }
    }
    contentItem: Text {
        padding: 5
        clip: true
        font.pixelSize: 13
        font.family: ubuntuRegular.name
        verticalAlignment: Text.AlignVCenter
        color: '#333333'
        renderType: Text.NativeRendering
        text: control.displayText
    }
    popup: Popup {
        y: control.height - 1
        width: control.width
        implicitHeight: contentItem.implicitHeight
        padding: 0
        contentItem: ListView {
            clip: true
            implicitHeight: contentHeight
            model: control.popup.visible ? control.delegateModel : null
            currentIndex: control.highlightedIndex
            ScrollBar.vertical: ScrollBar{}
        }
        background: Rectangle {
            border.color: '#000000'
        }
    }
    Component.onCompleted: currentIndex = indexOfValue(currentIndex)
}