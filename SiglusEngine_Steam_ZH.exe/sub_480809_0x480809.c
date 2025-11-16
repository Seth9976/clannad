// 函数: sub_480809
// 地址: 0x480809
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 8)

if (eax != 0)
    (*(*eax + 8))(eax)
    *(arg1 + 8) = 0

int32_t result = j__free(*(arg1 + 0x58))
int32_t ecx_1 = *(arg1 + 0x78)

if (ecx_1 == 0)
    return result

return sub_480197(ecx_1, 1)
