// 函数: sub_74e3a7
// 地址: 0x74e3a7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_14
sub_7470a1(&var_14, nullptr)
data_b955c0 = 0
uint32_t result = arg1

if (result == 0xfffffffe)
    data_b955c0 = 1
    result = GetOEMCP()
else if (result == 0xfffffffd)
    data_b955c0 = 1
    result = GetACP()
else if (result == 0xfffffffc)
    void* eax = var_14
    data_b955c0 = 1
    result = *(eax + 4)

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
