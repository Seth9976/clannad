// 函数: sub_406330
// 地址: 0x406330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg3 << 2
int32_t eax_1
eax_1.b = (ebx + 3).b & 0xfc
__chkstk(eax_1)
int32_t eax_3
eax_3.b = (ebx + 3).b & 0xfc
void* result = __chkstk(eax_3)
int32_t edx = 0
int32_t __saved_edi
int32_t* ebx_1 = &__saved_edi
int32_t ecx = 0
int32_t* var_10 = &__saved_edi
void* var_14 = nullptr

if (arg3 s> 0)
    int32_t* var_8_1 = arg1
    
    while (true)
        int32_t eax_6
        
        if (ecx s>= 2)
            float* esi_1 = &ebx_1[ecx - 1]
            void* var_c_1 = &(&__saved_edi)[ecx - 2]
            int32_t* eax_8 = &__saved_edi - ebx_1
            
            while (true)
                long double x87_r7_1 = fconvert.t(*var_8_1)
                long double temp1_1 = fconvert.t(*esi_1)
                x87_r7_1 - temp1_1
                int32_t* eax_9
                eax_9.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
                
                if ((eax_9:1.b & 1) != 0)
                    goto label_40637f
                
                if (edx s< *(eax_8 + esi_1) + arg2 && ecx s> 1)
                    long double x87_r7_2 = fconvert.t(*esi_1)
                    long double temp2_1 = fconvert.t(esi_1[-1])
                    x87_r7_2 - temp2_1
                    int32_t eax_12
                    eax_12.w = (x87_r7_2 < temp2_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe
                    
                    if ((eax_12:1.b & 0x41) != 0 && edx s< *var_c_1 + arg2)
                        ebx_1 = var_10
                        ecx -= 1
                        esi_1 -= 4
                        var_c_1 -= 4
                        continue
                
                ebx_1 = var_10
                (&__saved_edi)[ecx] = edx
                eax_6 = *var_8_1
                break
        else
        label_40637f:
            (&__saved_edi)[ecx] = edx
            eax_6 = *var_8_1
        
        ebx_1[ecx] = eax_6
        result = arg3
        ecx += 1
        edx += 1
        var_8_1 = &var_8_1[1]
        
        if (edx s>= result)
            break

int32_t edx_1 = 0
int32_t var_10_1 = 0

if (ecx s> 0)
    int32_t __saved_esi
    int32_t* esi_4 = &__saved_esi
    float* eax_20 = ebx_1 - &__saved_edi
    float* var_18_2 = eax_20
    
    while (true)
        if (edx_1 s< ecx - 1)
            long double x87_r7_3 = fconvert.t(*(eax_20 + esi_4))
            long double temp0_1 = fconvert.t(*ebx_1)
            x87_r7_3 - temp0_1
            eax_20.w = (x87_r7_3 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe
        
        if (edx_1 s>= ecx - 1 || (eax_20:1.b & 0x41) != 0)
            result = esi_4[-1] + arg2 + 1
        else
            result = *esi_4
        
        if (result s> arg3)
            result = arg3
        
        if (var_14 s< result)
            result -= var_14
            int32_t* edx_3 = &arg1[var_14]
            var_14 += result
            void* i
            
            do
                *edx_3 = *ebx_1
                edx_3 = &edx_3[1]
                i = result
                result -= 1
            while (i != 1)
            edx_1 = var_10_1
        
        edx_1 += 1
        esi_4 = &esi_4[1]
        ebx_1 = &ebx_1[1]
        var_10_1 = edx_1
        
        if (edx_1 s>= ecx)
            break
        
        eax_20 = var_18_2

return result
