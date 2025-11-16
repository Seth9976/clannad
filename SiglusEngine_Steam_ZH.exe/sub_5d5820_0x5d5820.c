// 函数: sub_5d5820
// 地址: 0x5d5820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx
int32_t* result = sub_5d53a0(ecx)
result[3].w = 0

if (result == 0xfffffff0)
    return result

*(result + 0x10) = *arg1
result[6] = arg1[1].d
int32_t eax
eax.w = *(arg1 + 0xc)
result[7].w = eax.w
result[8] = arg1[2].d
void* eax_2 = *(arg1 + 0x14)
result[9] = eax_2

if (eax_2 != 0)
    *(eax_2 + 4)
    *(eax_2 + 4) += 1

return result
