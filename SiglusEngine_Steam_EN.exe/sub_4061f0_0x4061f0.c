// 函数: sub_4061f0
// 地址: 0x4061f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
int32_t esi = 0
int32_t ebx = edi[9]
sub_406330(arg2, ebx, edi[0xa])
int32_t edx_3 = *edi[5] - (ebx s>> 1) - edi[7]

if (*edi s> 1)
    do
        void* ebx_2 = &arg2[edx_3]
        float eax_3 = edi[5]
        arg1 = arg2[edx_3]
        long double x87_r7_1 = fconvert.t(arg1)
        int32_t ecx_6 = ((*(eax_3 i+ (esi << 2) + 4) + *(eax_3 i+ (esi << 2))) s>> 1) - edi[7]
        void* ebp_2 = edi[1]
        long double temp0_1 = fconvert.t(*(ebp_2 + 0x20))
        x87_r7_1 - temp0_1
        eax_3.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        
        if ((eax_3:1.b & 0x41) == 0)
            arg1 = *(ebp_2 + 0x20)
        
        int32_t ebp_3 = edx_3 + 1
        
        while (ebp_3 s<= ecx_6)
            long double x87_r7_2 = fconvert.t(*(ebx_2 + 4))
            long double temp2_1 = fconvert.t(-9999f)
            x87_r7_2 - temp2_1
            ebx_2 += 4
            edx_3 += 1
            ebp_3 += 1
            eax_3.w = (x87_r7_2 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe
            
            if ((eax_3:1.b & 0x41) != 0)
            label_406288:
                long double x87_r7_4 = fconvert.t(arg1)
                long double temp3_1 = fconvert.t(-9999f)
                x87_r7_4 - temp3_1
                eax_3.w = (x87_r7_4 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe
                
                if ((eax_3:1.b & 0x40) != 0)
                    arg1 = *ebx_2
            else
                long double x87_r7_3 = fconvert.t(*ebx_2)
                long double temp4_1 = fconvert.t(arg1)
                x87_r7_3 - temp4_1
                eax_3.w = (x87_r7_3 < temp4_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe
                
                if ((eax_3:1.b & 1) == 0)
                    goto label_406288
                
                arg1 = *ebx_2
        
        int32_t i = edi[7] + edx_3
        
        if (esi s< *edi)
            while (*(edi[5] + (esi << 2)) s<= i)
                long double x87_r7_5 = fconvert.t(*(arg3 + (esi << 2)))
                long double temp5_1 = fconvert.t(arg1)
                x87_r7_5 - temp5_1
                int32_t eax_5
                eax_5.w = (x87_r7_5 < temp5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe
                
                if ((eax_5:1.b & 1) != 0)
                    *(arg3 + (esi << 2)) = fconvert.s(fconvert.t(arg1))
                
                esi += 1
                
                if (esi s>= *edi)
                    break
    while (esi + 1 s< *edi)

int32_t result = *edi
arg2 = fconvert.s(fconvert.t(arg2[edi[0xa] - 1]))

if (esi s< result)
    int32_t** ecx_11 = arg3 + (esi << 2)
    
    do
        long double x87_r7_8 = fconvert.t(*ecx_11)
        long double temp1_1 = fconvert.t(arg2)
        x87_r7_8 - temp1_1
        result.w = (x87_r7_8 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe
        
        if ((result:1.b & 1) != 0)
            *ecx_11 = arg2
        
        result = *edi
        esi += 1
        ecx_11 = &ecx_11[1]
    while (esi s< result)

return result
