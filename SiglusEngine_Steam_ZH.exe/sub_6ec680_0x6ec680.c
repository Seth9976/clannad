// 函数: sub_6ec680
// 地址: 0x6ec680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t* eax_1 = arg1 - ebx
int32_t* var_10 = ebx
int32_t i_1 = 0
int32_t i

while (true)
    int16_t* ebx_1 = *ebx
    char edi_1 = (*ebx_1).b
    int32_t eax_2 = 1 << edi_1
    void* var_8_1 = eax_2 + 1
    int32_t esi_1 = 0
    void* ecx_4
    
    do
        int32_t edx = sx.d(ebx_1[esi_1 + 1])
        
        if (edx s> 0)
            ecx_4 = var_8_1 + sub_6ec620(ebx_1, edx)
            esi_1 += 1
            var_8_1 = ecx_4
        else
            ecx_4 = var_8_1
            esi_1 += 1 << (edi_1 - (neg.d(edx) s>> 8).b)
    while (esi_1 s< eax_2)
    
    i = i_1
    void* esi_2 = ecx_4 * 2
    int32_t* eax_6 = _malloc(esi_2)
    *(eax_1 + var_10) = eax_6
    
    if (eax_6 == 0)
        break
    
    sub_748840(eax_6, *var_10, esi_2)
    ebx = &var_10[1]
    i_1 = i + 1
    var_10 = ebx
    
    if (i + 1 s>= 0x50)
        return 0

while (i s> 0)
    int32_t var_2c_3 = *(arg1 + (i << 2) - 4)
    i -= 1
    _free(var_2c_3)

return 0xffffffff
