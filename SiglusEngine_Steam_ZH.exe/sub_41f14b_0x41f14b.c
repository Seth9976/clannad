// 函数: sub_41f14b
// 地址: 0x41f14b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* edx = arg3
int32_t edi
int32_t var_c = edi
void* ecx_2 = (*(arg1 + 0x68) << 4) + edx

if (*(arg1 + 0x14) == 0)
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
    arg3.w = temp0_1
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(arg3.w | 0xc00)
    *(arg1 + 0x7c) = arg3
    int32_t eax_6 = *(arg1 + 8)
    
    if (eax_6 == 1 || eax_6 == 4)
        if (edx u< ecx_2)
            void* esi_2 = edx + 8
            int32_t i_7 = ((ecx_2 - edx - 1) u>> 4) + 1
            int32_t i
            
            do
                int32_t var_18_3 = ((ecx_2 - edx - 1) u>> 4) + 1
                *(esi_2 - 8) = fconvert.s(sub_41ea8f(fconvert.s(fconvert.t(*(esi_2 - 8)))))
                int32_t var_18_5 = ((ecx_2 - edx - 1) u>> 4) + 1
                *(esi_2 - 4) = fconvert.s(sub_41ea8f(fconvert.s(fconvert.t(*(esi_2 - 4)))))
                int32_t var_18_7 = ((ecx_2 - edx - 1) u>> 4) + 1
                *esi_2 = fconvert.s(sub_41ea8f(fconvert.s(fconvert.t(*esi_2))))
                esi_2 += 0x10
                i = i_7
                i_7 -= 1
            while (i != 1)
    else if (edx u< ecx_2)
        void* esi_1 = edx + 0xc
        int32_t i_6 = ((ecx_2 - edx - 1) u>> 4) + 1
        int32_t i_1
        
        do
            int32_t var_18_1 = ((ecx_2 - edx - 1) u>> 4) + 1
            *esi_1 = fconvert.s(sub_41ea8f(fconvert.s(fconvert.t(*esi_1))))
            esi_1 += 0x10
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    int16_t x87control_1
    int16_t x87status_3
    x87control_1, x87status_3 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
else
    int32_t edi_2 = *(arg1 + 8)
    
    if (edi_2 == 1 || edi_2 == 4)
        if (edx u< ecx_2)
            float* eax_2 = edx + 8
            int32_t i_5 = ((ecx_2 - edx - 1) u>> 4) + 1
            int32_t i_2
            
            do
                long double x87_r7_2 = fconvert.t(eax_2[-2])
                eax_2[-2] = fconvert.s(x87_r7_2 * x87_r7_2)
                long double x87_r7_3 = fconvert.t(eax_2[-1])
                eax_2[-1] = fconvert.s(x87_r7_3 * x87_r7_3)
                long double x87_r7_4 = fconvert.t(*eax_2)
                *eax_2 = fconvert.s(x87_r7_4 * x87_r7_4)
                eax_2 = &eax_2[4]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else if (edx u< ecx_2)
        float* eax_1 = edx + 0xc
        int32_t i_4 = ((ecx_2 - edx - 1) u>> 4) + 1
        int32_t i_3
        
        do
            long double x87_r7_1 = fconvert.t(*eax_1)
            *eax_1 = fconvert.s(x87_r7_1 * x87_r7_1)
            eax_1 = &eax_1[4]
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
