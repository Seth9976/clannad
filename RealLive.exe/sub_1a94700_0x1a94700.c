// 函数: sub_1a94700
// 地址: 0x1a94700
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t result = arg1
data_1c07714 = 0

if (result == 0xfffffffe)
    data_1c07714 = 1
    return GetOEMCP() __tailcall

if (result == 0xfffffffd)
    data_1c07714 = 1
    return GetACP() __tailcall

if (result == 0xfffffffc)
    result = data_1c078d8
    data_1c07714 = 1

return result
