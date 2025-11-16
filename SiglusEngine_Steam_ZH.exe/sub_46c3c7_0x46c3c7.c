// 函数: sub_46c3c7
// 地址: 0x46c3c7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** eax = sub_42cfa1(0x30)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46b7f7(eax)

if (result == 0)
    return result

int32_t edi
int32_t var_8 = edi
__builtin_memcpy(&result[4], arg1 + 0x10, 0x20)
return result
