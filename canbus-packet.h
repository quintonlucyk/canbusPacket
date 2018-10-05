#ifndef GOOSE_CANBUS_PACKET_H
#define GOOSE_CANBUS_PACKET_H

#include <Cosa/Trace.hh>
#include <stdint.h>

namespace wlp {

    class canbusPacket {
    public:
        explicit canbusPacket(float data,uint32_t data_type);
        explicit canbusPacket(uint64_t packet);
        void changeData(float new_data);
        void changeDataType(uint32_t new_data_type);
        uint32_t getData();
        uint32_t getDataType();
        uint64_t getPacket();

    private:
        uint32_t m_data;
        uint32_t m_data_type;
    };

}

#endif //GOOSE_CANBUS_PACKET_H