// 函数: __FF_MSGBANNER
// 地址: 0x5f6040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int16_t* result

if (__set_error_mode(3) == 1)
    __NMSG_WRITE(0xfc)
    result = __NMSG_WRITE(0xff)
else
    result = __set_error_mode(3)
    
    if (result == 0 && data_641108 == 1)
        __NMSG_WRITE(0xfc)
        result = __NMSG_WRITE(0xff)

return result
