#include <canbusPacket.h>

using namespace wlp;

canbusPacket::canbusPacket(float data,uint32_t data_type){
    m_data = *reinterpret_cast<uint32_t*>(&data);
    m_data_type = data_type;
}

void canbusPacket::changeData(float new_data) {
	m_data = *reinterpret_cast<uint32_t*>(&new_data);
}

void canbusPacket::changeDataType(uint32_t new_data_type) {
	m_data_type = new_data_type;
}

uint32_t canbusPacket::getData() {
	return m_data;
}

uint32_t canbusPacket::getDataType() {
	return m_data_type;
}