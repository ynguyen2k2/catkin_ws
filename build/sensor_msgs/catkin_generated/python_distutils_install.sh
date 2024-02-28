#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/jetson/catkin_ws/src/common_msgs/sensor_msgs"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/jetson/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/jetson/catkin_ws/install/lib/python3/dist-packages:/home/jetson/catkin_ws/build/sensor_msgs/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/jetson/catkin_ws/build/sensor_msgs" \
    "/usr/bin/python3" \
    "/home/jetson/catkin_ws/src/common_msgs/sensor_msgs/setup.py" \
    egg_info --egg-base /home/jetson/catkin_ws/build/sensor_msgs \
    build --build-base "/home/jetson/catkin_ws/build/sensor_msgs" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/jetson/catkin_ws/install" --install-scripts="/home/jetson/catkin_ws/install/bin"
