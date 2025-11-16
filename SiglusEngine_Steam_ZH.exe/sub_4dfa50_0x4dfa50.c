// 函数: sub_4dfa50
// 地址: 0x4dfa50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t (__stdcall** eax_1)(int32_t* arg1) = (**(arg1 + 4))(arg1, 1, 0x40)
int32_t ecx = *(arg1 + 4)
int32_t edx_1 = *(arg1 + 0x24) << 8
*eax_1 = sub_4df800
*(arg1 + 0x1c0) = eax_1
eax_1[0xb] = 0
eax_1[0xc] = 0
eax_1[0xd] = 0
eax_1[0xe] = 0
int32_t eax_2 = (*ecx)(arg1, 1, edx_1)
int32_t result = *(arg1 + 0x24)
*(arg1 + 0xa4) = eax_2

if (result s> 0)
    int32_t ecx_3 = (result & 0xffffff) << 6
    result = 0xffffffff
    __builtin_memset(eax_2, 0xffffffff, ecx_3 << 2)

return result
