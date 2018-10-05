#include "../include/canbus-packet.h"

using namespace wlp;

canbusPacket::canbusPacket(float data,uint32_t data_type){
    m_data = *reinterpret_cast<uint32_t*>(&data);
    m_data_type = data_type;
}

canbusPacket::canbusPacket(uint64_t packet){
	m_data = (uint32_t)packet;
	m_data_type = (uint32_t)(packet >> 32);
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

uint64_t canbusPacket::getPacket() {
	uint64_t sixty_four_bit_packet = (uint64_t)m_data_type << 32 | m_data;
	return sixty_four_bit_packet;
}