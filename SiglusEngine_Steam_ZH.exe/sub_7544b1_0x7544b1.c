// 函数: sub_7544b1
// 地址: 0x7544b1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
uint32_t i = 1
void* edi = nullptr

if (esi s>= 0)
    while (i != 0)
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(edi + esi)
        int32_t ebx_2 = (eax_2 - edx) s>> 1
        int32_t* ecx_1 = ebx_2 * 0xc
        i = sub_75d36c(*arg3, *(ecx_1 + arg1))
        
        if (i == 0)
            *arg3 = ecx_1 + arg1 + 4
        else if (i s>= 0)
            edi = ebx_2 + 1
        else
            esi = ebx_2 - 1
        
        if (edi s> esi)
            break

int32_t result
result.b = i == 0
return result
