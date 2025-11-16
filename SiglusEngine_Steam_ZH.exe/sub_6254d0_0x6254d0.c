// 函数: sub_6254d0
// 地址: 0x6254d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg5
void* esi = arg3
int32_t* var_8 = arg2
void* var_c = arg3

if (edi == 0)
    return 

int32_t i = arg6

while (i != 0)
    if (edi + i == 2)
        if (arg8(arg2, esi).b != 0)
            int32_t ecx_22 = *esi
            int32_t edx_13 = *(esi + 4)
            *esi = *var_8
            *(esi + 4) = var_8[1]
            *var_8 = ecx_22
            var_8[1] = edx_13
        
        break
    
    int32_t var_4c
    int32_t* var_48
    int32_t var_2c
    
    if (edi s<= i && edi s<= sub_6253c0(arg7))
        int32_t* ecx_13 = *(arg7 + 0x10)
        ecx_13[1] = *ecx_13
        sub_625a20(sub_5f27c0(&var_4c, arg7), var_c, &var_2c, var_8, var_4c, var_48)
        int32_t eax_20 = var_2c
        
        if (eax_20 != 0)
            eax_20 = j__free(eax_20)
        
        int32_t** ecx_16 = *(arg7 + 0x10)
        sub_625a80(eax_20, ecx_16[1], *ecx_16, var_8, arg4, var_c, arg8)
        return 
    
    if (i s<= sub_6253c0(arg7))
        int32_t* ecx_18 = *(arg7 + 0x10)
        ecx_18[1] = *ecx_18
        sub_625a20(sub_5f27c0(&var_4c, arg7), var_8, &var_2c, arg4, var_4c, var_48)
        int32_t eax_24 = var_2c
        
        if (eax_24 != 0)
            j__free(eax_24)
        
        int32_t* eax_25 = *(arg7 + 0x10)
        sub_625b30(eax_25, var_8, var_c, *eax_25, eax_25[1], arg4, arg8)
        return 
    
    int32_t* var_18_1
    int32_t* var_14_1
    int32_t var_10_1
    int32_t* eax_9
    int32_t ecx_6
    
    if (i s>= edi)
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = sx.q(i)
        int32_t ecx_8 = (eax_11 - edx_3) s>> 1
        arg5 = ecx_8
        void* ecx_9 = &var_8[ecx_8 * 2]
        void* var_3c_2 = ecx_9
        var_18_1 = ecx_9
        int32_t* eax_14 = sub_625fd0(var_8, var_8, var_c, ecx_9, arg8)
        ecx_6 = arg5
        var_14_1 = eax_14
        var_10_1 = (eax_14 - var_c) s>> 3
        eax_9 = var_8
    else
        int32_t eax_4
        int32_t edx
        edx:eax_4 = sx.q(edi)
        int32_t eax_6 = (eax_4 - edx) s>> 1
        void* var_3c_1 = var_c
        var_10_1 = eax_6
        int32_t* eax_7 = var_c + (eax_6 << 3)
        var_14_1 = eax_7
        int32_t* eax_8 = sub_625f80(eax_7, arg4, var_8, eax_7, arg8)
        var_18_1 = eax_8
        eax_9 = var_8
        ecx_6 = (eax_8 - eax_9) s>> 3
        arg5 = ecx_6
    
    edi -= var_10_1
    var_48 = var_18_1
    void* eax_17 = sub_625be0(eax_9, eax_9, var_14_1, var_48, edi, ecx_6, arg7)
    var_4c = arg8
    esi = eax_17
    sub_6254d0(esi, var_10_1, arg5, arg7, var_4c)
    i -= arg5
    arg2 = var_18_1
    var_8 = arg2
    var_c = esi
    
    if (edi == 0)
        return 
