// 函数: sub_495790
// 地址: 0x495790
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x2074)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t result_5 = arg1
int32_t entry_ebx

if (result_5 s<= 0)
    sub_5f02dd(entry_ebx ^ &__saved_ebp)
    return 0

int32_t xmm1[0x4] = data_624960

if (result_5 s> 0x101)
    result_5 = 0x101

int32_t var_102c[0x4]
int32_t var_81c[0x4]
int32_t var_414[0x4]
int32_t i

for (i = 0; i s< 0x100; i += 8)
    *(&var_81c + (i << 2)) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), xmm1)
    int32_t xmm0_5[0x4] = _mm_shuffle_epi32(zx.o(i + 4), 0)
    __builtin_memset(&var_102c[i], 0xff, 0x20)
    __builtin_memset(&var_414[i], 0, 0x20)
    void var_80c
    *(&var_80c + (i << 2)) = _mm_add_epi32(xmm0_5, xmm1)

if (i s< 0x101)
    int32_t ebx_2 = (0x101 - i) << 2
    __builtin_memset(&var_414[i], 0, ebx_2 u>> 2 << 2)
    __builtin_memset(&var_102c[i], 0xffffffff, ebx_2 u>> 2 << 2)
    
    do
        var_81c[i] = i
        i += 1
    while (i s< 0x101)

int32_t result_2 = sub_4956b0(arg2)
int32_t result_1
int32_t result

if (result_2 != 0xffffffff)
    int32_t i_1 = 0
    void var_203c
    int32_t var_c24[0x102]
    
    if (data_12dc4d0 s> 0)
        void* edi_3 = &var_203c
        
        do
            void* eax_4 = sub_495490(i_1)
            
            if (eax_4 != 0)
                int32_t var_14_1 = 0x10
                var_414[i_1] = 1
                sub_4d1c30(eax_4, eax_4 + 8, edi_3, var_14_1)
                var_c24[i_1] = *(eax_4 + 0x18)
            
            i_1 += 1
            edi_3 += 0x10
        while (i_1 s< data_12dc4d0)
    
    if (arg2 != 0)
        void* eax_6 = sub_495490(data_12dc5f0)
        
        if (eax_6 != 0)
            var_414[i_1] = 1
            int32_t eax_8 = i_1 << 4
            sub_4d1c30(eax_8, eax_6 + 8, &var_203c + eax_8, 0x10)
            var_c24[i_1] = *(eax_6 + 0x18)
        
        i_1 += 1
    
    int32_t result_3 = 0
    int32_t result_4 = 0
    
    if (i_1 s> 0)
        void* ecx_11 = &var_203c
        int32_t edx_4 = 0
        int32_t ebx_5 = 1
        void* var_2044_1 = &var_203c
        int32_t var_2040_1 = 0
        
        do
            if (*(&var_414 + edx_4) != 0)
                result_3 += 1
            else
                int32_t eax_10 = ebx_5
                
                if (ebx_5 s< i_1)
                    do
                        if (var_414[eax_10] != 0)
                            *(&var_81c + edx_4) = var_81c[eax_10]
                            *(&var_414 + edx_4) = var_414[eax_10]
                            sub_4d1c30(eax_10, &var_203c + (eax_10 << 4), var_2044_1, 0x10)
                            edx_4 = var_2040_1
                            int32_t ecx_17 = var_c24[eax_10]
                            result_3 += 1
                            var_414[eax_10] = 0
                            *(&var_c24 + edx_4) = ecx_17
                            ecx_11 = var_2044_1
                            break
                        
                        eax_10 += 1
                    while (eax_10 s< i_1)
                
                if (eax_10 == 0x101)
                    break
            
            ebx_5 += 1
            ecx_11 += 0x10
            edx_4 += 4
            var_2044_1 = ecx_11
            var_2040_1 = edx_4
        while (ebx_5 - 1 s< i_1)
        
        result_4 = result_3
    
    if (result_3 s> 0)
        int32_t eax_12 = 1
        int32_t var_2050_1 = result_3
        void* esi = &var_203c
        int32_t var_2054_1 = 1
        void* var_2044_2 = &var_203c
        int32_t var_2048_1 = 0
        int32_t i_3 = result_3
        int32_t ecx_18 = 0
        int32_t i_2
        
        do
            int32_t ebx_6 = eax_12
            
            if (eax_12 s< result_3)
                int16_t* eax_13 = esi + 0x10
                int16_t* var_2040_2 = eax_13
                
                do
                    int32_t ecx_20 = *(&__saved_ebp + ecx_18 - 0xc20)
                    int16_t* eax_18
                    
                    if (sub_495620(eax_13, ecx_20, esi, eax_13, var_c24[ebx_6]) == 0)
                        eax_18 = var_2040_2
                    else
                        int32_t edi_5 = *(&var_81c + var_2048_1)
                        int32_t esi_1 = *(&var_414 + var_2048_1)
                        void var_2078
                        sub_4d1c30(var_2048_1, var_2044_2, &var_2078, 0x10)
                        *(&var_81c + var_2048_1) = var_81c[ebx_6]
                        *(&var_414 + var_2048_1) = var_414[ebx_6]
                        eax_18 = var_2040_2
                        sub_4d1c30(eax_18, eax_18, var_2044_2, 0x10)
                        int32_t ecx_25 = var_c24[ebx_6]
                        var_81c[ebx_6] = edi_5
                        var_414[ebx_6] = esi_1
                        *(&__saved_ebp + ecx_18 - 0xc20) = ecx_25
                        sub_4d1c30(eax_18, &var_2078, eax_18, 0x10)
                        result_3 = result_4
                        esi = var_2044_2
                        var_c24[ebx_6] = ecx_20
                    
                    ecx_18 = var_2048_1
                    ebx_6 += 1
                    eax_13 = &eax_18[8]
                    var_2040_2 = eax_13
                while (ebx_6 s< result_3)
                
                eax_12 = var_2054_1
                i_3 = var_2050_1
            
            eax_12 += 1
            esi += 0x10
            ecx_18 += 4
            var_2054_1 = eax_12
            i_2 = i_3
            i_3 -= 1
            var_2044_2 = esi
            var_2048_1 = ecx_18
            var_2050_1 = i_3
        while (i_2 != 1)
    
    result_2 = result_5
    
    if (result_2 s>= result_3)
        result = result_3
        result_1 = result_3
    else
        result = result_2
        result_3 = result_2
        result_1 = result
    
    if (result_3 s> 0)
        __builtin_memcpy(&var_102c, &var_81c, result_3 << 2)
else
    result = 0
    result_1 = 0

int32_t esi_2 = 0

if (result_5 s> 0)
    int32_t ebx_7 = edx
    
    do
        result_2 = sub_4e8000(result_2, ebx_7, ecx, var_102c[esi_2], &data_704898)
        esi_2 += 1
        ebx_7 += 1
    while (esi_2 s< result_5)
    
    result = result_1

sub_5f02dd(entry_ebx ^ &__saved_ebp)
return result
