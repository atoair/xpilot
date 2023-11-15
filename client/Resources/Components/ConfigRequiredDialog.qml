import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Basic
import QtQuick.Window
import QtQuick.Layouts
import "../Controls"

Popup {
    id: popup
    width: 550
    height: 160
    x: (parent.width - width) / 2
    y: (parent.height - height) / 2
    modal: true
    focus: true
    closePolicy: Popup.NoAutoClose
    background: Rectangle {
        color: "white"
        border.color: "black"
    }

    Text {
        id: labelAskDownload
        text: "It looks like this may be the first time you've run xPilot on this computer. Some configuration items are required before you can connect to the network. Would you like to configure xPilot now?"
        width: 500
        wrapMode: Text.Wrap
        font.pixelSize: 14
        renderType: Text.NativeRendering
        x: 20
        y: 20
    }

    BlueButton {
        id: btnYes
        text: "Yes"
        width: 50
        height: 30
        font.pixelSize: 14
        anchors.top: labelAskDownload.bottom
        anchors.left: labelAskDownload.left
        anchors.topMargin: 15
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.PointingHandCursor
            onClicked: {
                popup.close()
                createSettingsWindow()
            }
        }
    }

    GrayButton {
        id: btnNo
        text: "No"
        width: 50
        height: 30
        font.pixelSize: 14
        anchors.top: labelAskDownload.bottom
        anchors.left: btnYes.right
        anchors.topMargin: 15
        anchors.leftMargin: 10
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.PointingHandCursor
            onClicked: {
                popup.close()
            }
        }
    }
}
