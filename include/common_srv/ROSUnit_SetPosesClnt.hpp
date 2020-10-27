#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/Pose.h"
#include "common_srv/set_poses.h"
//Change the msg type code to reflect your system
#include "common_srv/PosesMsg.hpp"

class ROSUnit_SetPosesClnt : public ROSUnit
{
    public:
        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);
        std::vector<Port*> getPorts() {return _ports;};
        ROSUnit_SetPosesClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPosesClnt();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:
        Port* _input_port_0;
        std::vector<Port*> _ports;
        ros::ServiceClient m_client;
};