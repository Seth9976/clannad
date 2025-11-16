// 函数: sub_482f46
// 地址: 0x482f46
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = sub_4d973d(sub_482e89)
*arg1 = eax

if (eax == 0)
    return eax

int32_t edi
int32_t var_8 = edi
int32_t eax_1 = _malloc(0x8000)
arg1[1] = eax_1

if (eax_1 != 0)
    int32_t eax_2 = _malloc(0x8000)
    arg1[2] = eax_2
    
    if (eax_2 != 0 && sub_4d9826(*arg1, arg1[1], eax_2) == 0)
        int32_t eax_4 = _malloc(0x10000)
        arg1[3] = eax_4
        
        if (eax_4 != 0)
            int32_t eax_5 = _malloc(0x8008)
            arg1[4] = eax_5
            
            if (eax_5 != 0)
                int32_t eax_6 = _malloc(0x200)
                arg1[5] = eax_6
                
                if (eax_6 != 0)
                    int32_t eax_7 = _malloc(0x10000)
                    arg1[6] = eax_7
                    
                    if (eax_7 != 0)
                        int32_t eax_8 = _malloc(0x10000)
                        arg1[7] = eax_8
                        
                        if (eax_8 != 0)
                            int32_t eax_9 = _malloc(0x10000)
                            int32_t ecx_7
                            ecx_7.b = eax_9 != 0
                            arg1[8] = eax_9
                            return ecx_7

return 0
