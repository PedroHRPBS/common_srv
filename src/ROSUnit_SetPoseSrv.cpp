#include "common_srv/ROSUnit_SetPoseSrv.hpp"

ROSUnit_SetPoseSrv* ROSUnit_SetPoseSrv::m_ptr[ROSUnit_capacity];
int ROSUnit_SetPoseSrv::internal_counter=0;

bool(*ROSUnit_SetPoseSrv::callbackFunctionPointer[ROSUnit_capacity])(common_srv::set_pose::Request&, common_srv::set_pose::Response&){
  ROSUnit_SetPoseSrv::srv_callback1,
  ROSUnit_SetPoseSrv::srv_callback2,
  ROSUnit_SetPoseSrv::srv_callback3,
  ROSUnit_SetPoseSrv::srv_callback4,
  ROSUnit_SetPoseSrv::srv_callback5
};

Port* ROSUnit_SetPoseSrv::_output_port_0 = new OutputPort(ports_id::OP_0, NULL);
Port* ROSUnit_SetPoseSrv::_output_port_1 = new OutputPort(ports_id::OP_1, NULL);
Port* ROSUnit_SetPoseSrv::_output_port_2 = new OutputPort(ports_id::OP_2, NULL);
Port* ROSUnit_SetPoseSrv::_output_port_3 = new OutputPort(ports_id::OP_3, NULL);
Port* ROSUnit_SetPoseSrv::_output_port_4 = new OutputPort(ports_id::OP_4, NULL);

ROSUnit_SetPoseSrv::ROSUnit_SetPoseSrv (std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, ROSUnit_SetPoseSrv::callbackFunctionPointer[internal_counter]);
    m_ptr[internal_counter] = this;
    internal_counter++;
    _ports = {_output_port_0, _output_port_1, _output_port_2, _output_port_3, _output_port_4};
}

ROSUnit_SetPoseSrv::~ROSUnit_SetPoseSrv ()
{

}

bool ROSUnit_SetPoseSrv::srv_callback1(common_srv::set_pose::Request& req, common_srv::set_pose::Response& res)
{
    //Change the code below to reflect your system
    PoseMsg t_msg;
    t_msg.pose.x = req.pose.point.x;
    t_msg.pose.y = req.pose.point.y;
    t_msg.pose.z = req.pose.point.z;
    t_msg.pose.yaw = req.pose.yaw.data;
    _output_port_0->receiveMsgData(&t_msg);
    //m_ptr[0]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}

bool ROSUnit_SetPoseSrv::srv_callback2(common_srv::set_pose::Request& req, common_srv::set_pose::Response& res)
{
    //Change the code below to reflect your system
    PoseMsg t_msg;
    t_msg.pose.x = req.pose.point.x;
    t_msg.pose.y = req.pose.point.y;
    t_msg.pose.z = req.pose.point.z;
    t_msg.pose.yaw = req.pose.yaw.data;
    _output_port_1->receiveMsgData(&t_msg);
    //m_ptr[1]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}

bool ROSUnit_SetPoseSrv::srv_callback3(common_srv::set_pose::Request& req, common_srv::set_pose::Response& res)
{
    //Change the code below to reflect your system
    PoseMsg t_msg;
    t_msg.pose.x = req.pose.point.x;
    t_msg.pose.y = req.pose.point.y;
    t_msg.pose.z = req.pose.point.z;
    t_msg.pose.yaw = req.pose.yaw.data;
    _output_port_2->receiveMsgData(&t_msg);
    //m_ptr[2]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}

bool ROSUnit_SetPoseSrv::srv_callback4(common_srv::set_pose::Request& req, common_srv::set_pose::Response& res)
{
    //Change the code below to reflect your system
    PoseMsg t_msg;
    t_msg.pose.x = req.pose.point.x;
    t_msg.pose.y = req.pose.point.y;
    t_msg.pose.z = req.pose.point.z;
    t_msg.pose.yaw = req.pose.yaw.data;
    _output_port_3->receiveMsgData(&t_msg);
    //m_ptr[3]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}

bool ROSUnit_SetPoseSrv::srv_callback5(common_srv::set_pose::Request& req, common_srv::set_pose::Response& res)
{
    //Change the code below to reflect your system
    PoseMsg t_msg;
    t_msg.pose.x = req.pose.point.x;
    t_msg.pose.y = req.pose.point.y;
    t_msg.pose.z = req.pose.point.z;
    t_msg.pose.yaw = req.pose.yaw.data;
    _output_port_4->receiveMsgData(&t_msg);
    //m_ptr[4]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}