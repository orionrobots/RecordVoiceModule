// Module to communicate with Voice recognition Module V2
#define VM_HEAD 0xaa

//Command keys
#define VM_WAIT        0x00
#define VM_DEL_GROUP1  0x01
#define VM_DEL_GROUP2  0x02
#define VM_DEL_GROUP3  0x03
#define VM_DEL_ALL     0x04
#define VM_REC_GROUP1  0x11
#define VM_REC_GROUP2  0x12
#define VM_REC_GROUP3  0x13
#define VM_IMP_GROUP1  0x21
#define VM_IMP_GROUP2  0x22
#define VM_IMP_GROUP3  0x23
#define VM_QUERY       0x24
#define VM_BAUD_2400   0x31
#define VM_BAUD_4800   0x32
#define VM_BAUD_9600   0x33
#define VM_BAUD_19200  0x34
#define VM_BAUD_38400  0x35
#define VM_SWITCH_CMN  0x36
#define VM_SWITCH_CMP  0x37
#define VM_RESET_O1    0x41
#define VM_RESET_02    0x42
#define VM_RESET_03    0x43
#define VM_RESET_04    0x44
#define VM_RESET_05    0x45
#define VM_RESET_ALL   0x46
#define VM_PULSE       0x50
#define VM_FLIP        0x51
#define VM_DOWN        0x52
#define VM_UP          0x53
#define VM_PWM_10      0x60
#define VM_PWM_15      0x61
#define VM_PWM_20      0x62
#define VM_PWM_20      0x63
#define VM_PWM_30      0x64
#define VM_PWM_50      0x65
#define VM_PWM_60      0x66
#define VM_PWM_70      0x67
#define VM_PWM_80      0x68
#define VM_PWM_90      0x69
#define VM_PWM_100     0x6A
#define VM_PWM_200     0x6B
#define VM_PWM_300     0x6C
#define VM_PWM_400     0x6D
#define VM_PWM_500     0x6E
#define VM_PWM_1000    0x6F
#define VM_RESET_SER   0x70
#define VM_QUERY_VER   0xbb

//Compact mode responses
#define VM_READY       0x40
#define VM_NO_VOICE    0x41
#define VM_AGAIN       0x42 //Wait for start
#define VM_TOO_LOUD    0x43
#define VM_DIFFERENT   0x44
#define VM_RECORDED    0x45
#define VM_FINISHED_G1 0x46
#define VM_FINISHED_G2 0x47
#define VM_FINISHED_G3 0x48
#define VM_SUCCESS     0xcc
#define VM_ERROR       0xe0
#define VM_IMPORT_FAIL 0xe1
//Query response - used in a bitfield
#define VM_NO_GROUP    0x00
#define VM_GROUP_1     0x01
#define VM_GROUP_2     0x02
#define VM_GROUP_3     0x04



