from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Launch arguments for both robots
    declare_robot1_namespace = DeclareLaunchArgument('robot1_namespace', default_value='robot1')
    declare_robot1_prefix = DeclareLaunchArgument('robot1_prefix', default_value='robot1_')
    declare_robot2_namespace = DeclareLaunchArgument('robot2_namespace', default_value='robot2')
    declare_robot2_prefix = DeclareLaunchArgument('robot2_prefix', default_value='robot2_')
    declare_world_name = DeclareLaunchArgument('world_name', default_value='empty.world')

    # Paths to the launch files
    bringup_dir = FindPackageShare('minibot_bringup').find('minibot_bringup')
    nav2_dir = FindPackageShare('minibot_navigation2').find('minibot_navigation2')

    # Gazebo server and client
    gz_server = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare('gazebo_ros'),
            'launch',
            'gzserver.launch.py'
        ])),
        launch_arguments={'world': LaunchConfiguration('world_name')}.items()
    )

    gz_client = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare('gazebo_ros'),
            'launch',
            'gzclient.launch.py'
        ]))
    )

    # Robot bringup
    robot1_bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            bringup_dir,
            'launch',
            'multi_bringup_gazebo.launch.py'
        ])),
        launch_arguments={
            'namespace': LaunchConfiguration('robot1_namespace'),
            'robot_prefix': LaunchConfiguration('robot1_prefix')
        }.items()
    )

    robot2_bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            bringup_dir,
            'launch',
            'multi_bringup_gazebo.launch.py'
        ])),
        launch_arguments={
            'namespace': LaunchConfiguration('robot2_namespace'),
            'robot_prefix': LaunchConfiguration('robot2_prefix')
        }.items()
    )

    # Navigation bringup for robot1
    robot1_nav_bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            nav2_dir,
            'launch',
            'multi_navigation_launch.py'
        ])),
        launch_arguments={
            'namespace': LaunchConfiguration('robot1_namespace')
        }.items()
    )

    # Navigation bringup for robot2
    robot2_nav_bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            nav2_dir,
            'launch',
            'multi_navigation_launch.py'
        ])),
        launch_arguments={
            'namespace': LaunchConfiguration('robot2_namespace')
        }.items()
    )

    return LaunchDescription([
        declare_robot1_namespace,
        declare_robot1_prefix,
        declare_robot2_namespace,
        declare_robot2_prefix,
        declare_world_name,
        gz_server,
        gz_client,
        GroupAction([
            robot1_bringup,
            robot1_nav_bringup,
        ]),
        GroupAction([
            robot2_bringup,
            robot2_nav_bringup,
        ]),
    ])
