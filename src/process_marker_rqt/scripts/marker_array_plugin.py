#!/usr/bin/env python

import rospy
from std_msgs.msg import String
from visualization_msgs.msg import MarkerArray
from rqt_gui_py.plugin import Plugin
from python_qt_binding.QtWidgets import QWidget, QVBoxLayout, QLabel

class MarkerArrayPlugin(Plugin):
    def __init__(self, context):
        super(MarkerArrayPlugin, self).__init__(context)
        self.setObjectName('MarkerArrayPlugin')

        self._widget = MarkerArrayWidget()

        if context.serial_number() > 1:
            raise RuntimeError("Cannot run more than one instance of MarkerArrayPlugin")

        context.add_widget(self._widget)

class MarkerArrayWidget(QWidget):
    def __init__(self):
        super(MarkerArrayWidget, self).__init__()

        self.markers_subscriber = rospy.Subscriber('/your_marker_array_topic', MarkerArray, self.marker_array_callback)

        layout = QVBoxLayout()
        self.setLayout(layout)

        self.marker_label = QLabel("No markers received yet")
        layout.addWidget(self.marker_label)

    def marker_array_callback(self, msg):
        # Display number of markers received
        num_markers = len(msg.markers)
        self.marker_label.setText(f"Number of markers: {num_markers}")

    def shutdown_plugin(self):
        self.markers_subscriber.unregister()

    def save_settings(self, plugin_settings, instance_settings):
        pass

    def restore_settings(self, plugin_settings, instance_settings):
        pass

if __name__ == '__main__':
    import sys
    from rqt_gui.main import Main

    main = Main()
    sys.exit(main.main(sys.argv, standalone='marker_array_rqt'))
