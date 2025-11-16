// 函数: __FF_MSGBANNER
// 地址: 0x74dbd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* result

if (__set_error_mode(3) == 1)
    __NMSG_WRITE(0xfc)
    result = __NMSG_WRITE(0xff)
else
    result = __set_error_mode(3)
    
    if (result == 0 && data_b94f70 == 1)
        __NMSG_WRITE(0xfc)
        result = __NMSG_WRITE(0xff)

return result
