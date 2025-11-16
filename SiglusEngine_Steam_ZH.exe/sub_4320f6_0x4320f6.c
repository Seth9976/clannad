// 函数: sub_4320f6
// 地址: 0x4320f6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1

if (arg2 == 0)
    return 0

int32_t edi
int32_t var_18_1 = edi
int32_t arg_c
int32_t eax = sub_433f9c(arg1, arg2, arg_c)
int32_t result

if (eax == 0)
    result = 0
else
    char* eax_4 = *(*(*(eax + 4) + 0x40) + *(arg1 + 0x344) + *(eax + 0x18) + 0x10)
    
    if (*(eax + 0x10) != 0xffffffff || eax_4 == 0)
        result = 0
    else
        int32_t* i_1 = arg3
        
        if (i_1 u>= eax_4)
            result = 0
        else
            int32_t* esi_1 = *(eax + 0xc)
            arg3 = nullptr
            
            if (esi_1 == 0)
            label_432185:
                int32_t* eax_5 = sub_745f3f(0x20)
                
                if (eax_5 == 0)
                    esi_1 = nullptr
                else
                    eax_5[4] = 0xffffffff
                    eax_5[7] = 0
                    eax_5[2] = 0
                    eax_5[3] = 0
                    esi_1 = eax_5
                
                if (esi_1 == 0)
                    result = 0
                else
                    var_8 = *(*(eax + 4) + 0x40) + *(eax + 0x18)
                    uint32_t temp0_1 =
                        divu.dp.d(0:(sub_42f997(0, *(arg1 + 0x344), &var_8, &arg_c)), eax_4)
                    *esi_1 = 3
                    esi_1[1] = *(eax + 4)
                    esi_1[6] = *(eax + 0x18)
                    esi_1[4] = i_1
                    int32_t i = 0
                    esi_1[5] = temp0_1
                    esi_1[7] = *(eax + 0x1c)
                    
                    if (divu.dp.d(0:(arg_c * i_1), eax_4) u> 0)
                        do
                            esi_1[7] = *(esi_1[7] + 0xc)
                            i += 1
                        while (i u< divu.dp.d(0:(esi_1[4] * arg_c), eax_4))
                    
                    if (arg3 == 0)
                        esi_1[3] = *(eax + 0xc)
                        *(eax + 0xc) = esi_1
                    else
                        esi_1[3] = arg3[3]
                        arg3[3] = esi_1
                    
                    result = not.d(esi_1)
            else
                while (esi_1[4] u< i_1)
                    arg3 = esi_1
                    esi_1 = esi_1[3]
                    
                    if (esi_1 == 0)
                        break
                
                if (esi_1 == 0 || esi_1[4] u> i_1)
                    goto label_432185
                
                result = not.d(esi_1)

return result
