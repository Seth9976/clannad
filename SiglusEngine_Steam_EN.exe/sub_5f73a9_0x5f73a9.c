// 函数: sub_5f73a9
// 地址: 0x5f73a9
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_14
sub_5f1b77(&var_14, nullptr)
data_641764 = 0
uint32_t result = arg1

if (result == 0xfffffffe)
    data_641764 = 1
    result = GetOEMCP()
else if (result == 0xfffffffd)
    data_641764 = 1
    result = GetACP()
else if (result == 0xfffffffc)
    void* eax = var_14
    data_641764 = 1
    result = *(eax + 4)

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
