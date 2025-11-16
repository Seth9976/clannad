// 函数: sub_4b6f9a
// 地址: 0x4b6f9a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_118 = edi
int32_t* eax = arg1[0x40]
int32_t* ebx = nullptr
int32_t var_14 = 0
int32_t var_2c = 0
int32_t var_28 = 1
int32_t var_24 = 2
int32_t var_20 = 3
int32_t esi_1 = *eax & 0xfffff
int32_t var_c = 0
int32_t var_10c
int32_t var_6c[0x10]
int32_t eax_1 = sub_4c73cc(arg1, eax, 0xac91b0, &var_6c, &var_14, &var_10c, &var_2c, esi_1, 0)
bool cond:0_1

if (eax_1 != 0)
    cond:0_1 =
        sub_4c73cc(arg1, arg1[0x40], 0xac9210, &var_6c, &var_14, &var_10c, &var_2c, esi_1, 0) != 0
    var_c = 1

int32_t result

if (eax_1 != 0 && cond:0_1)
    result = 0
else
    int32_t var_1c_1 = 0
    
    if (var_c != 0)
        int32_t eax_3 = arg1[5]
        int32_t ecx_2 = arg1[4]
        int32_t var_fc
        int32_t ecx_4 = *(*(ecx_2 + (*(*(eax_3 + (var_fc << 2)) + 4) << 2)) + 4)
        
        if ((ecx_4:1.b & 2) != 0)
            var_1c_1 = 1
        
        if ((*(*(ecx_2 + (*(*(eax_3 + (var_10c << 2)) + 4) << 2)) + 4) & 0x300) != 0
                && (0x300 & ecx_4) != 0)
            return 1
    
    void* eax_6 = sub_49ec23(0x74)
    
    if (eax_6 == 0)
        ebx = nullptr
    else
        ebx = sub_49e789(eax_6)
    
    if (ebx == 0)
        return 0x8007000e
    
    int32_t eax_9 = esi_1 & 0xfffff
    int32_t eax_10
    
    if (var_c == 0)
        eax_10 = eax_9 | 0x70300000
    else
        eax_10 = eax_9 | 0x70400000
    
    int32_t result_1 = sub_49ec6e(ebx, eax_10, esi_1 * 3, esi_1, 0)
    result = result_1
    
    if (result_1 s>= 0)
        int32_t result_2 = sub_49e7bf(ebx, arg1[0x40])
        result = result_2
        
        if (result_2 s>= 0)
            int32_t var_c_1 = 0
            
            if (esi_1 u> 0)
                int32_t var_18_1 = esi_1 << 3
                int32_t var_10_1 = esi_1 << 2
                
                do
                    int32_t eax_16 = var_c_1 << 2
                    *(eax_16 + ebx[4]) = *(eax_16 + *(arg1[0x40] + 0x10))
                    int32_t edx_6 = ebx[2]
                    int32_t __saved_ebp
                    int32_t ecx_15
                    
                    if (var_1c_1 == 0)
                        *(eax_16 + edx_6) = (&__saved_ebp)[var_c_1 - 0x42]
                        ecx_15 = (&__saved_ebp)[var_c_1 - 0x3e]
                    else
                        *(eax_16 + edx_6) = (&__saved_ebp)[var_c_1 - 0x3e]
                        ecx_15 = (&__saved_ebp)[var_c_1 - 0x42]
                    
                    int32_t edx_7 = var_10_1
                    var_c_1 += 1
                    var_10_1 += 4
                    *(edx_7 + ebx[2]) = ecx_15
                    int32_t edx_8 = var_18_1
                    var_18_1 += 4
                    *(edx_8 + ebx[2]) = (&__saved_ebp)[var_c_1 - 0x3a]
                while (var_c_1 u< esi_1)
            
            if ((*(*arg1 + 0x20))(ebx, 0) == 0)
                int32_t eax_21 = 0
                
                if (var_14 u> 0)
                    do
                        *var_6c[eax_21] = 0
                        eax_21 += 1
                    while (eax_21 u< var_14)
                
                void* ecx_22 = arg1[0x40]
                
                if (ecx_22 != 0)
                    sub_46cb59(ecx_22, 1)
                
                *(arg1[6] + (arg1[0x3f] << 2)) = ebx
                ebx = nullptr
                result = 0
            else
                result = 1

if (ebx != 0)
    sub_46cb59(ebx, 1)

return result
