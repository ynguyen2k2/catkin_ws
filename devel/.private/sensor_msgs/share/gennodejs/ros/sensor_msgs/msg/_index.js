
"use strict";

let MagneticField = require('./MagneticField.js');
let CompressedImage = require('./CompressedImage.js');
let PointCloud2 = require('./PointCloud2.js');
let RegionOfInterest = require('./RegionOfInterest.js');
let Temperature = require('./Temperature.js');
let Image = require('./Image.js');
let MultiEchoLaserScan = require('./MultiEchoLaserScan.js');
let JointState = require('./JointState.js');
let MultiDOFJointState = require('./MultiDOFJointState.js');
let FluidPressure = require('./FluidPressure.js');
let RelativeHumidity = require('./RelativeHumidity.js');
let JoyFeedback = require('./JoyFeedback.js');
let NavSatStatus = require('./NavSatStatus.js');
let LaserScan = require('./LaserScan.js');
let BatteryState = require('./BatteryState.js');
let CameraInfo = require('./CameraInfo.js');
let JoyFeedbackArray = require('./JoyFeedbackArray.js');
let PointCloud = require('./PointCloud.js');
let Range = require('./Range.js');
let Imu = require('./Imu.js');
let TimeReference = require('./TimeReference.js');
let PointField = require('./PointField.js');
let ChannelFloat32 = require('./ChannelFloat32.js');
let Joy = require('./Joy.js');
let LaserEcho = require('./LaserEcho.js');
let Illuminance = require('./Illuminance.js');
let NavSatFix = require('./NavSatFix.js');

module.exports = {
  MagneticField: MagneticField,
  CompressedImage: CompressedImage,
  PointCloud2: PointCloud2,
  RegionOfInterest: RegionOfInterest,
  Temperature: Temperature,
  Image: Image,
  MultiEchoLaserScan: MultiEchoLaserScan,
  JointState: JointState,
  MultiDOFJointState: MultiDOFJointState,
  FluidPressure: FluidPressure,
  RelativeHumidity: RelativeHumidity,
  JoyFeedback: JoyFeedback,
  NavSatStatus: NavSatStatus,
  LaserScan: LaserScan,
  BatteryState: BatteryState,
  CameraInfo: CameraInfo,
  JoyFeedbackArray: JoyFeedbackArray,
  PointCloud: PointCloud,
  Range: Range,
  Imu: Imu,
  TimeReference: TimeReference,
  PointField: PointField,
  ChannelFloat32: ChannelFloat32,
  Joy: Joy,
  LaserEcho: LaserEcho,
  Illuminance: Illuminance,
  NavSatFix: NavSatFix,
};
