from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from ament_index_python.packages import get_package_share_directory
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    namespace = LaunchConfiguration('namespace')
    prefix = LaunchConfiguration('prefix')

    bringup_dir = get_package_share_directory('minibot_bringup')

    # Upload robot description
    upload_robot = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([PathJoinSubstitution([
            FindPackageShare('minibot_description'),
            'launch',
            'upload_robot.launch.py'
        ])]),
        launch_arguments={
            'namespace': namespace,
            'prefix': prefix
        }.items()
    )

    # Spawn robot
    spawn_robot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        namespace=namespace,
        arguments=[
            '-entity', namespace,
            '-topic', PathJoinSubstitution([namespace, 'robot_description'])
        ],
        output='screen'
    )

    # Load controllers
    load_joint_state_controller = Node(
        package='controller_manager',
        executable='spawner.py',
        namespace=namespace,
        arguments=['joint_state_broadcaster'],
        output='screen'
    )

    load_diff_drive_controller = Node(
        package='controller_manager',
        executable='spawner.py',
        namespace=namespace,
        arguments=['diff_drive_controller'],
        output='screen'
    )

    return LaunchDescription([
        upload_robot,
        spawn_robot,
        RegisterEventHandler(
            OnProcessExit(
                target_action=spawn_robot,
                on_exit=[load_joint_state_controller]
            )
        ),
        RegisterEventHandler(
            OnProcessExit(
                target_action=load_joint_state_controller,
                on_exit=[load_diff_drive_controller]
            )
        )
    ])
