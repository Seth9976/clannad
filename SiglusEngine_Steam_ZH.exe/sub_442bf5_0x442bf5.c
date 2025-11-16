// 函数: sub_442bf5
// 地址: 0x442bf5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
void* ecx = *esi
int32_t ebx = *(ecx + 0x10)
int32_t eax = *(ecx + 4)
int32_t edi
int32_t var_10 = edi

if (ebx == 0)
    ebx += 1

if (eax s>= 0)
    if (eax s<= 3)
        int32_t eax_5 = *(ecx + 0x14)
        int32_t edx_1 = 0
        int32_t edi_2 = *(ecx + 0x18)
        *esi = ecx + 0x1c
        int32_t ecx_3
        ecx_3.b = modu.dp.d(edx_1:eax_5, arg2) != 0
        return (ecx_3 + divu.dp.d(edx_1:eax_5, arg2)) * edi_2 * ebx
    
    if (eax != 4 && eax == 5)
        int32_t* eax_1 = *(ecx + 0x14)
        int32_t edi_1 = 0
        *esi = ecx + 0x18
        
        if (eax_1 u> 0)
            arg1 = eax_1
            int32_t* i
            
            do
                edi_1 += sub_442bf5(esi, arg2)
                i = arg1
                arg1 -= 1
            while (i != 1)
        
        return edi_1 * ebx

return 0
