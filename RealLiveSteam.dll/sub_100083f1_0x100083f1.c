// 函数: sub_100083f1
// 地址: 0x100083f1
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

void* var_14
sub_10003903(&var_14, nullptr)
data_1001b468 = 0
uint32_t result = arg1

if (result == 0xfffffffe)
    data_1001b468 = 1
    result = GetOEMCP()
else if (result == 0xfffffffd)
    data_1001b468 = 1
    result = GetACP()
else if (result == 0xfffffffc)
    void* eax = var_14
    data_1001b468 = 1
    result = *(eax + 4)

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
