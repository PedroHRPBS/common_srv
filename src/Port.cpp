#include "common_srv/Port.hpp"

Port::Port(int t_id, Block* t_block){
    this->_id = t_id;
    this->_block = t_block;
}

Port::~Port() {

}

int Port::getID(){
    return _id;
}

void Port::connect(Port* t_input_port){
    this->addCallbackMsgReceiver((MsgReceiver*) t_input_port);
}
