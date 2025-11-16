// 函数: sub_419bfe
// 地址: 0x419bfe
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg5
int32_t edi
int32_t var_1c = edi
void* edi_1 = arg2
void* ecx_2 = arg4 * eax + edi_1

if (edi_1 u< ecx_2)
    arg4 = edi_1 + (arg3 << 2)
    
    do
        arg3 = arg1
        
        if (edi_1 u< arg4)
            int32_t* esi_2 = edi_1 + 4
            int32_t i_1 = ((arg4 - edi_1 - 1) u>> 3) + 1
            int32_t i
            
            do
                int32_t edi_2 = *(esi_2 + eax)
                int32_t edi_3 = *esi_2
                int32_t edi_4 = *(eax + esi_2 - 4)
                int32_t eax_1 = esi_2[-1]
                int32_t ebx_12 = (((eax_1 & 0xff00ff) + (edi_4 & 0xff00ff) + (edi_2 & 0xff00ff)
                    + (edi_3 & 0xff00ff) + 0x20002) & 0x3fc03fc) | (((eax_1 & 0xff00)
                    + (edi_4 & 0xff00) + (edi_2 & 0xff00) + (edi_3 & 0xff00) + 0x200) & 0x3fc00)
                uint32_t* eax_7 = arg3
                arg3 = &arg3[1]
                esi_2 = &esi_2[2]
                i = i_1
                i_1 -= 1
                *eax_7 = ebx_12 u>> 2
                eax = arg5
            while (i != 1)
            edi_1 = arg2
        
        arg1 += arg6
        int32_t esi_4 = eax * 2
        arg4 += esi_4
        edi_1 += esi_4
        arg2 = edi_1
    while (edi_1 u< ecx_2)

return 0
