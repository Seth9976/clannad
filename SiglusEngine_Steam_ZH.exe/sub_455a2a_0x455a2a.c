// 函数: sub_455a2a
// 地址: 0x455a2a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t var_8 = 0
int32_t ecx_1

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 0
    **(arg1 + 0xc4) = 2
    *(*(arg1 + 0xc4) + 0x10) = 0
    *(*(arg1 + 0xc4) + 0x14) = 1
    *(*(arg1 + 0xc4) + 0x18) = 1
    ecx_1 = sub_4538a9(arg1, arg2, 1, 1)
    
    if (ecx_1 != 0)
        goto label_455a81
    
    var_8 = 0x8876086c
    return 

ecx_1 = not.d(arg2)
label_455a81:
int32_t* eax_4 = *(ecx_1 + 4)

if (eax_4[4] != 0 && *(ecx_1 + 8) == 0xffffffff)
    var_8 = 0x8876086c
else if (*(arg1 + 0x3c) != 3)
    int32_t edx_5 = eax_4[1]
    
    if (edx_5 s< 0 || edx_5 s> 3)
        var_8 = 0x8876086c
    else
        int32_t edi_2 = eax_4[5]
        int32_t edx_6 = eax_4[6]
        int32_t eax_6 = *eax_4
        
        if (eax_6 == 3 && edx_6 == 1 && (edi_2 == 3 || edi_2 == 4))
            long double x87_r7_1 = fconvert.t(0.00392156886f)
            float var_18 = fconvert.s(float.t(zx.d((arg3 u>> 0x10).b)) * x87_r7_1)
            float var_14_1 = fconvert.s(float.t(zx.d((arg3 u>> 8).b)) * x87_r7_1)
            int32_t eax_9 = 0
            float var_10_1 = fconvert.s(float.t(zx.d(arg3.b)) * x87_r7_1)
            float var_c_1 = fconvert.s(float.t(arg3 u>> 0x18) * x87_r7_1)
            
            if (edi_2 u> 0)
                do
                    *(*ecx_1 + (eax_9 << 2)) = fconvert.s(fconvert.t((&var_18)[eax_9]))
                    eax_9 += 1
                while (eax_9 u< edi_2)
            
            var_8 = sub_448129(arg1, ecx_1)
        else if (edi_2 != 1 || edx_6 != 1)
            var_8 = 0x8876086c
        else if (eax_6 == 1)
            int32_t* esi_1 = *ecx_1
            int32_t eax_14
            eax_14.b = *esi_1 == 0
            int32_t edx_17
            edx_17.b = arg3 == 0
            
            if (eax_14 != edx_17)
                int32_t eax_15
                eax_15.b = arg3 != 0
                *esi_1 = eax_15
                var_8 = sub_448129(arg1, ecx_1)
        else if (eax_6 == 2)
            uint32_t* eax_13 = *ecx_1
            
            if (*eax_13 != arg3)
                *eax_13 = arg3
                var_8 = sub_448129(arg1, ecx_1)
        else if (eax_6 != 3)
            var_8 = 0x8876086c
        else
            long double x87_r7_3 = float.t(arg3)
            float* edx_15 = *ecx_1
            long double x87_r5_1 = fconvert.t(*edx_15)
            x87_r5_1 - x87_r7_3
            int32_t eax_12
            eax_12.w = (x87_r5_1 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_1, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                *edx_15 = fconvert.s(x87_r7_3)
                var_8 = sub_448129(arg1, ecx_1)
else
    var_8 = sub_44de1b(arg1, not.d(ecx_1), arg3)
