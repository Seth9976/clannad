// 函数: __FF_MSGBANNER
// 地址: 0x10003faa
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int16_t* result

if (__set_error_mode(3) == 1)
    __NMSG_WRITE(0xfc)
    result = __NMSG_WRITE(0xff)
else
    result = __set_error_mode(3)
    
    if (result == 0 && data_1001aa60 == 1)
        __NMSG_WRITE(0xfc)
        result = __NMSG_WRITE(0xff)

return result
