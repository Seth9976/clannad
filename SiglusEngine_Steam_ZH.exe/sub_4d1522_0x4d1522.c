// 函数: sub_4d1522
// 地址: 0x4d1522
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
void* eax = sub_49ec23(0x74)
int32_t* var_8

if (eax == 0)
    var_8 = nullptr
else
    var_8 = sub_49e789(eax)

if (var_8 == 0)
    return 0x8007000e

int32_t i_1 = arg4
int32_t var_c_1 = 0

if (i_1 u> 0)
    int32_t* eax_3 = *(*(arg1 + 0x100) + 0x10)
    int32_t i
    
    do
        if (*(arg2 + (*(*(*(arg1 + 0x14) + (*eax_3 << 2)) + 0x10) << 2)) != 0xffffffff)
            var_c_1 += 1
        
        eax_3 = &eax_3[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result =
    sub_49ec6e(var_8, (**(arg1 + 0x100) & 0xfff00000) | var_c_1, var_c_1 * arg3, var_c_1, 0)

if (result s>= 0)
    result = sub_49e7bf(var_8, *(arg1 + 0x100))
    
    if (result s>= 0)
        int32_t var_10_1 = 0
        
        if (arg3 u> 0)
            do
                int32_t ecx_4 = 0
                int32_t var_14_1 = 0
                
                if (arg4 u> 0)
                    do
                        void* eax_12 = *(arg1 + 0x100)
                        
                        if (*(arg2 + (*(
                                *(*(arg1 + 0x14) + (*(*(eax_12 + 0x10) + (ecx_4 << 2)) << 2))
                                + 0x10) << 2)) != 0xffffffff)
                            *(var_8[2] + ((var_10_1 * var_c_1 + var_14_1) << 2)) =
                                *(*(eax_12 + 8) + ((var_10_1 * arg4 + ecx_4) << 2))
                            
                            if (var_10_1 == 0)
                                *(var_8[4] + (var_14_1 << 2)) =
                                    *(*(*(arg1 + 0x100) + 0x10) + (ecx_4 << 2))
                            
                            var_14_1 += 1
                        
                        ecx_4 += 1
                    while (ecx_4 u< arg4)
                
                var_10_1 += 1
            while (var_10_1 u< arg3)
        
        result = sub_49f431(arg1, var_8)
        
        if (result s>= 0)
            var_8 = nullptr
            result = 0

if (var_8 != 0)
    sub_46cb59(var_8, 1)

return result
