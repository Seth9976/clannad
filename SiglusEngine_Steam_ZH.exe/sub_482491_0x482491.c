// 函数: sub_482491
// 地址: 0x482491
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
char* eax = arg2
int32_t edi
int32_t var_14 = edi
int32_t var_8_1 = 0

if (eax != 0)
    void* edx_1 = &eax[1]
    
    do
        ecx.b = *eax
        eax = &eax[1]
    while (ecx.b != 0)
    
    int32_t eax_2 = _malloc(eax - edx_1 + 1)
    var_8_1 = eax_2
    
    if (eax_2 == 0)
        return nullptr
    
    int32_t esi_3
    int32_t edi_2
    edi_2, esi_3 = __builtin_memcpy(eax_2, arg2, (eax - edx_1 + 1) u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_3, (eax - edx_1 + 1) & 3)

if (arg5 != 0)
    int32_t edx_2 = *arg5
    int32_t edi_3 = 0
    
    if (edx_2 s> 0)
        int32_t* ecx_6 = arg5[3]
        
        do
            int32_t* eax_4 = *ecx_6
            
            if (eax_4[1] == 0 && *eax_4 u< 1)
                return nullptr
            
            edi_3 += 1
            ecx_6 = &ecx_6[1]
        while (edi_3 s< edx_2)

void* eax_5 = sub_4d96f1(arg1)
int32_t* result
int32_t* eax_6

if (eax_5 == 0)
    int32_t eax_8 = sub_4823e6(arg3, arg1, &arg2)
    int32_t eax_9
    
    if (eax_8 == 0)
        eax_9 = sub_4823e6(arg4, arg1, &arg2)
    
    if (eax_8 == 0 && eax_9 == 0)
        result = nullptr
    else
        eax_6 = sub_745f3f(0x14)
        
        if (eax_6 == 0)
            result = nullptr
        else
            result = sub_481fdc(eax_6, var_8_1, nullptr, arg2, arg5)
else
    eax_6 = sub_745f3f(0x14)
    
    if (eax_6 == 0)
        result = nullptr
    else
        result = sub_481fdc(eax_6, var_8_1, eax_5, nullptr, arg5)

if (result == 0 && var_8_1 != 0)
    _free(var_8_1)

return result
