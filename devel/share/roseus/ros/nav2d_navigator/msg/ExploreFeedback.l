;; Auto-generated. Do not edit!


(when (boundp 'nav2d_navigator::ExploreFeedback)
  (if (not (find-package "NAV2D_NAVIGATOR"))
    (make-package "NAV2D_NAVIGATOR"))
  (shadow 'ExploreFeedback (find-package "NAV2D_NAVIGATOR")))
(unless (find-package "NAV2D_NAVIGATOR::EXPLOREFEEDBACK")
  (make-package "NAV2D_NAVIGATOR::EXPLOREFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude ExploreFeedback.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass nav2d_navigator::ExploreFeedback
  :super ros::object
  :slots (_robot_pose _target_pose _distance ))

(defmethod nav2d_navigator::ExploreFeedback
  (:init
   (&key
    ((:robot_pose __robot_pose) (instance geometry_msgs::Pose2D :init))
    ((:target_pose __target_pose) (instance geometry_msgs::Pose2D :init))
    ((:distance __distance) 0.0)
    )
   (send-super :init)
   (setq _robot_pose __robot_pose)
   (setq _target_pose __target_pose)
   (setq _distance (float __distance))
   self)
  (:robot_pose
   (&rest __robot_pose)
   (if (keywordp (car __robot_pose))
       (send* _robot_pose __robot_pose)
     (progn
       (if __robot_pose (setq _robot_pose (car __robot_pose)))
       _robot_pose)))
  (:target_pose
   (&rest __target_pose)
   (if (keywordp (car __target_pose))
       (send* _target_pose __target_pose)
     (progn
       (if __target_pose (setq _target_pose (car __target_pose)))
       _target_pose)))
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Pose2D _robot_pose
    (send _robot_pose :serialization-length)
    ;; geometry_msgs/Pose2D _target_pose
    (send _target_pose :serialization-length)
    ;; float32 _distance
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Pose2D _robot_pose
       (send _robot_pose :serialize s)
     ;; geometry_msgs/Pose2D _target_pose
       (send _target_pose :serialize s)
     ;; float32 _distance
       (sys::poke _distance (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Pose2D _robot_pose
     (send _robot_pose :deserialize buf ptr-) (incf ptr- (send _robot_pose :serialization-length))
   ;; geometry_msgs/Pose2D _target_pose
     (send _target_pose :deserialize buf ptr-) (incf ptr- (send _target_pose :serialization-length))
   ;; float32 _distance
     (setq _distance (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get nav2d_navigator::ExploreFeedback :md5sum-) "e64a606b3357bbb098996ab9c2799a9f")
(setf (get nav2d_navigator::ExploreFeedback :datatype-) "nav2d_navigator/ExploreFeedback")
(setf (get nav2d_navigator::ExploreFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
geometry_msgs/Pose2D robot_pose
geometry_msgs/Pose2D target_pose
float32 distance


================================================================================
MSG: geometry_msgs/Pose2D
# Deprecated
# Please use the full 3D pose.

# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.

# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.


# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta

")



(provide :nav2d_navigator/ExploreFeedback "e64a606b3357bbb098996ab9c2799a9f")


