// 函数: sub_651240
// 地址: 0x651240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        sub_651510(arg1, 1)
    
    int64_t* ecx_6 = arg1[1]
    
    if (ecx_6 != 0)
        *ecx_6 = *arg2
        ecx_6[1].d = arg2[1].d
        eax.w = *(arg2 + 0xc)
        *(ecx_6 + 0xc) = eax.w
else
    if (ecx == arg1[2])
        sub_651510(arg1, 1)
    
    int64_t* edx_4 = *arg1 + (arg2 - eax) s/ 0xe * 0xe
    int64_t* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        *ecx_4 = *edx_4
        ecx_4[1].d = edx_4[1].d
        int32_t eax_2
        eax_2.w = *(edx_4 + 0xc)
        *(ecx_4 + 0xc) = eax_2.w
        arg1[1] += 0xe
        return 

arg1[1] += 0xe
