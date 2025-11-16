// 函数: sub_6b3320
// 地址: 0x6b3320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* edx = *(arg1 + 0x20)
int32_t eax = *edx

if (eax != 0 && *(arg1 + 0x38) u< eax)
    *(arg1 + 0x38) = eax

char ecx = arg6.b
int32_t esi_1

if ((ecx & 1) != 0)
    esi_1 = **(arg1 + 0x1c)

int32_t esi_3
int32_t edi_1

if ((ecx & 1) == 0 || esi_1 == 0)
    int32_t edx_5
    
    if ((ecx & 2) != 0)
        edx_5 = *edx
    
    if ((ecx & 2) == 0 || edx_5 == 0)
        esi_3 = arg3
        edi_1 = arg4
        
        if ((esi_3 | edi_1) != 0)
            esi_3 = 0xffffffff
            edi_1 = 0xffffffff
    else
        if (arg5 == 2)
            int32_t eax_24
            int32_t edx_6
            edx_6:eax_24 = sx.q(*(arg1 + 0x38) - **(arg1 + 0xc))
            esi_3 = arg3 + eax_24
            edi_1 = adc.d(arg4, edx_6, arg3 + eax_24 u< arg3)
        else if (arg5 == 1)
            int32_t eax_27
            int32_t edx_7
            edx_7:eax_27 = sx.q(edx_5 - **(arg1 + 0xc))
            esi_3 = arg3 + eax_27
            edi_1 = adc.d(arg4, edx_7, arg3 + eax_27 u< arg3)
        else if (arg5 == 0)
            edi_1 = arg4
            esi_3 = arg3
        else
            esi_3 = 0xffffffff
            edi_1 = 0xffffffff
        
        if (edi_1 s< 0 || (edi_1 s<= 0 && esi_3 u< 0))
            esi_3 = 0xffffffff
            edi_1 = 0xffffffff
        else
            int32_t ecx_11 = **(arg1 + 0xc)
            int32_t eax_31
            int32_t edx_8
            edx_8:eax_31 = sx.q(*(arg1 + 0x38) - ecx_11)
            
            if (edi_1 s> edx_8 || (edi_1 s>= edx_8 && esi_3 u> eax_31))
                esi_3 = 0xffffffff
                edi_1 = 0xffffffff
            else
                int32_t* eax_32 = *(arg1 + 0x30)
                int32_t ecx_13 = ecx_11 - edx_5 + esi_3
                *eax_32 -= ecx_13
                int32_t* eax_33 = *(arg1 + 0x20)
                *eax_33 += ecx_13
else
    if (arg5 == 2)
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = sx.q(*(arg1 + 0x38) - **(arg1 + 0xc))
        esi_3 = arg3 + eax_5
        edi_1 = adc.d(arg4, edx_1, arg3 + eax_5 u< arg3)
    else if (arg5 != 1)
        if (arg5 == 0)
            edi_1 = arg4
            esi_3 = arg3
        else
            esi_3 = 0xffffffff
            edi_1 = 0xffffffff
    else if ((ecx & 2) != 0)
        esi_3 = 0xffffffff
        edi_1 = 0xffffffff
    else
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = sx.q(esi_1 - **(arg1 + 0xc))
        esi_3 = arg3 + eax_8
        edi_1 = adc.d(arg4, edx_2, arg3 + eax_8 u< arg3)
    
    if (edi_1 s< 0 || (edi_1 s<= 0 && esi_3 u< 0))
        esi_3 = 0xffffffff
        edi_1 = 0xffffffff
    else
        int32_t ecx_3 = **(arg1 + 0xc)
        int32_t eax_12
        int32_t edx_3
        edx_3:eax_12 = sx.q(*(arg1 + 0x38) - ecx_3)
        
        if (edi_1 s> edx_3 || (edi_1 s>= edx_3 && esi_3 u> eax_12))
            esi_3 = 0xffffffff
            edi_1 = 0xffffffff
        else
            int32_t* eax_13 = *(arg1 + 0x2c)
            int32_t ecx_5 = ecx_3 - esi_1 + esi_3
            *eax_13 -= ecx_5
            int32_t* eax_14 = *(arg1 + 0x1c)
            *eax_14 += ecx_5
            
            if ((arg6.b & 2) != 0)
                int32_t eax_16 = **(arg1 + 0x20)
                
                if (eax_16 != 0)
                    int32_t edx_4 = **(arg1 + 0x1c)
                    int32_t ecx_8 = **(arg1 + 0x30) + eax_16 - edx_4
                    **(arg1 + 0x20) = edx_4
                    **(arg1 + 0x30) = ecx_8

arg2[1] = edi_1
*arg2 = esi_3
arg2[2] = 0
arg2[3] = 0
arg2[4] = 0
return arg2
