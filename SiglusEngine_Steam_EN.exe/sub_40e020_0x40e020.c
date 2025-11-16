// 函数: sub_40e020
// 地址: 0x40e020
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg2 + 0x504)
void* ebp = *(arg2 + 0x510)
int32_t* eax = *(arg2 + 0x508)
int32_t result = 0
void* var_d30 = ebp
int32_t var_d38 = esi
void* var_d48 = nullptr
int32_t var_c10
int32_t ecx_2
int32_t edi_1

if (esi s> 0)
    edi_1, ecx_2 = __memfill_u32(&var_c10, 0xffffff38, esi)
bool cond:1 = esi != 0
int32_t var_d14
int32_t var_b0c[0x41]
int32_t var_a08[0x41]
int32_t var_904[0x41]

if (esi s> 0)
    int32_t ecx_4
    int32_t edi_2
    edi_2, ecx_4 = __memfill_u32(&var_d14, 0xffffff38, esi)
    
    if (esi s> 0)
        __builtin_memset(&var_a08, 0, esi << 2)
    
    cond:1 = esi != 0
    
    if (esi s> 0)
        int32_t ecx_7
        int32_t edi_3
        edi_3, ecx_7 = __memfill_u32(&var_904, 1, esi)
        
        if (esi s> 0)
            __builtin_memset(&var_b0c, 0xffffffff, esi << 2)
        
        cond:1 = esi != 0

int32_t result_2
int32_t* var_d60
void var_800
void* eax_3

if (not(cond:1))
    var_d60 = eax
    void* var_d64_1 = &var_800
    int32_t var_d6c_1 = 0
    result_2 = arg3
    eax_3 = sub_40e530(arg4, result_2, var_d6c_1, eax, var_d64_1, var_d60, ebp)
label_40e13b:
    
    if (eax_3 != 0)
        int32_t var_d20 = 0xffffff38
        int32_t var_d24 = 0xffffff38
        int32_t* var_d5c_3 = &var_d24
        var_d60 = &var_d20
        sub_40e750(&var_800, esi - 1, var_d60, var_d5c_3)
        int16_t top_1 = 0xffff
        int32_t eax_9 = var_d20
        var_c10 = eax_9
        var_d14 = eax_9
        int32_t eax_10 = var_d24
        int32_t var_d10_1 = eax_10
        int32_t var_c0c_1 = eax_10
        int32_t var_d44_2 = 2
        int32_t result_1
        
        if (esi s> 2)
            int32_t var_d48_1 = 0
            void* var_d40_1 = arg2 + 0x210
            bool cond:7_1
            
            do
                int32_t eax_11 = *var_d40_1
                int32_t i_1 = var_a08[eax_11]
                int32_t i = var_904[eax_11]
                
                if (var_b0c[i_1] != i)
                    var_b0c[i_1] = i
                    int32_t ebx = *(arg2 + (i_1 << 2) + 0x208)
                    int32_t edx_8 = *(arg2 + (i << 2) + 0x208)
                    int32_t result_4 = *(ebp + (i << 2) + 0x344)
                    int32_t var_d34 = *(ebp + (i_1 << 2) + 0x344)
                    var_d60 = &var_d14
                    int32_t* var_d64_4 = &var_c10
                    result_1 = result_4
                    int32_t eax_14 = sub_40eb90(var_d64_4, var_d60, i_1)
                    int32_t* var_d6c_3 = &var_d14
                    result_2 = &var_c10
                    int32_t eax_15 = sub_40eb90(result_2, var_d6c_3, i)
                    
                    if (eax_14 == 0xffffffff || eax_15 == 0xffffffff)
                        _exit(1)
                        noreturn
                    
                    var_d60 = arg3
                    int32_t eax_16 = var_d34
                    result_2 = result_1
                    int32_t eax_17 =
                        sub_40e960(eax_16, result_2, eax_14, eax_15, arg4, var_d60, var_d30)
                    unimplemented  {call 0x40e960}
                    void var_d0c
                    void var_c08
                    
                    if (eax_17 == 0)
                        *(&var_c08 + var_d48_1) = 0xffffff38
                        *(&var_d0c + var_d48_1) = 0xffffff38
                    else
                        int32_t var_d28 = 0xffffff38
                        int32_t var_d2c = 0xffffff38
                        var_d34 = 0xffffff38
                        result_1 = 0xffffff38
                        int32_t* var_d5c_6 = &var_d2c
                        var_d60 = &var_d28
                        sub_40e750(&(&var_d60)[ebx * 8 + 0x158], eax_11 - ebx, var_d60, var_d5c_6)
                        unimplemented  {call 0x40e750}
                        int32_t* var_d6c_5 = &result_1
                        result_2 = &var_d34
                        sub_40e750(&(&result_2)[eax_11 * 8 + 0x15c], edx_8 - eax_11, result_2, 
                            var_d6c_5)
                        top_1 -= 2
                        unimplemented  {call 0x40e750}
                        int32_t eax_22 = var_d28
                        (&var_d14)[i_1] = eax_22
                        
                        if (i_1 == 0)
                            var_c10 = eax_22
                        
                        int32_t ecx_19 = var_d2c
                        int32_t edx_12 = var_d34
                        *(&var_c08 + var_d48_1) = ecx_19
                        *(&var_d0c + var_d48_1) = edx_12
                        int32_t result_3 = result_1
                        (&var_c10)[i] = result_3
                        
                        if (i == 1)
                            int32_t result_6 = result_3
                        
                        if (ecx_19 s>= 0 || edx_12 s>= 0)
                            int32_t eax_24 = eax_11 - 1
                            int32_t __saved_edi
                            
                            if (eax_24 s>= 0)
                                void* ecx_20 = &(&__saved_edi)[eax_24 + 0x115]
                                
                                while (*ecx_20 == i)
                                    eax_24 -= 1
                                    *ecx_20 = var_d44_2
                                    ecx_20 -= 4
                                    
                                    if (eax_24 s< 0)
                                        break
                            
                            int32_t eax_25 = eax_11 + 1
                            
                            if (eax_25 s< var_d38)
                                void* ecx_22 = &(&__saved_edi)[eax_25 + 0xd4]
                                
                                while (*ecx_22 == i_1)
                                    eax_25 += 1
                                    *ecx_22 = var_d44_2
                                    ecx_22 += 4
                                    
                                    if (eax_25 s>= var_d38)
                                        break
                    ebp = var_d30
                
                cond:7_1 = var_d44_2 + 1 s< var_d38
                var_d44_2 += 1
                var_d40_1 += 4
                var_d48_1 += 4
            while (cond:7_1)
            esi = var_d38
        
        var_d60 = arg1
        result = sub_4038a0(var_d60, esi << 2)
        int32_t var_d64_7 = 0
        int32_t* var_d68_7 = &var_d14
        int32_t* var_d6c_6 = &var_c10
        result_1 = result
        int32_t eax_31 = sub_40eb90(var_d6c_6, var_d68_7, var_d64_7)
        result_2 = 1
        *result = eax_31
        *(result + 4) = sub_40eb90(&var_c10, &var_d14, result_2)
        int32_t result_5 = 2
        
        if (esi s> 2)
            int32_t* var_d48_2 = result + 8
            void* var_d40_2 = ebp + 0x34c
            void* esi_4 = arg2 + 0x30c
            int32_t result_7
            
            do
                int32_t eax_34 = *(esi_4 + 0xfc)
                int32_t ecx_26 = *esi_4
                int32_t edx_19 = *(ebp + (eax_34 << 2) + 0x344)
                int32_t edi_5 = *(ebp + (ecx_26 << 2) + 0x344)
                int32_t eax_35 = *(result + (eax_34 << 2))
                int32_t ebx_3 = *var_d40_2
                var_d60 = *(result + (ecx_26 << 2))
                int32_t eax_36 = sub_40e4e0(edx_19, edi_5, eax_35, var_d60, ebx_3)
                result_2 = result_5
                int32_t eax_37 = sub_40eb90(&var_c10, &var_d14, result_2)
                
                if (eax_37 s< 0 || eax_36 == eax_37)
                    *var_d48_2 = eax_36 | 0x8000
                else
                    *var_d48_2 = eax_37
                
                result_7 = result_5 + 1
                esi_4 += 4
                result_5 = result_7
                result = result_1
                var_d40_2 += 4
                var_d48_2 = &var_d48_2[1]
            while (result_7 s< var_d38)
else if (esi - 1 s> 0)
    void* esi_1 = arg2
    float* edi_4 = &var_800
    int32_t var_d44_1 = esi - 1
    void* edx_5
    bool cond:4_1
    
    do
        int32_t edx_2 = *(esi_1 + 4)
        int32_t eax_5 = *esi_1
        var_d60 = eax
        result_2 = arg3
        edx_5 = var_d48 + sub_40e530(arg4, result_2, eax_5, edx_2, edi_4, var_d60, ebp)
        edi_4 = &edi_4[8]
        esi_1 += 4
        cond:4_1 = var_d44_1 != 1
        var_d48 = edx_5
        var_d44_1 -= 1
    while (cond:4_1)
    esi = var_d38
    eax_3 = edx_5
    goto label_40e13b
return result
