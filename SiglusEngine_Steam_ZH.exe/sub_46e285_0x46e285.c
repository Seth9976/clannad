// 函数: sub_46e285
// 地址: 0x46e285
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
char** i = *(*arg1 + 0x3c)

while (true)
    if (i == 0)
        return 0
    
    char* eax_1 = i[1]
    char** i_3 = nullptr
    char** i_2 = nullptr
    
    do
        if (__stricmp(eax_1, i[1]) != 0)
            break
        
        void var_18
        
        if (sub_46b27d(*i, 0, &var_18) s>= 0)
            int32_t eax_4 = arg1[4]
            int32_t var_14
            
            if (eax_4 != var_14)
                if ((eax_4 & 0xffff0000) == var_14 && i_2 == 0)
                    i_2 = i
            else if (i_3 == 0)
                i_3 = i
        
        i = i[0xa]
    while (i != 0)
    
    if (i_3 == 0)
        i_3 = i_2
        
        if (i_3 == 0)
            continue
    
    int32_t eax_6
    int32_t ecx_2
    eax_6, ecx_2 = sub_49f4eb(arg1[2], i_3[1], 0xb51, 1, 4)
    
    if (eax_6 == 0xffffffff)
        break
    
    int32_t i_1 = 0
    void* esi_1 = &i_3[2]
    
    do
        int32_t var_28_3 = ecx_2
        int32_t var_2c_2 = ecx_2
        var_2c_2.q = fconvert.d(fconvert.t(*esi_1))
        int32_t eax_7
        eax_7, ecx_2 = sub_49f544(arg1[2], eax_6, 0, i_1, var_2c_2)
        
        if (eax_7 == 0xffffffff)
            return 0x8007000e
        
        i_1 += 1
        esi_1 += 8
    while (i_1 u< 4)

return 0x8007000e
