// 函数: sub_4849f8
// 地址: 0x4849f8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* esi = arg3
int32_t edi
int32_t var_14 = edi
int128_t* const edi_1 = &data_aac190
int32_t i = 4
bool cond:5_1

if (arg2 == 0)
    bool cond:2_1 = true
    
    while (i != 0)
        int32_t temp1_1 = *esi
        int32_t temp2_1 = *edi_1
        cond:2_1 = temp1_1 == temp2_1
        esi = &esi[1]
        edi_1 += 4
        i -= 1
        
        if (temp1_1 != temp2_1)
            break
    
    if (cond:2_1)
        return 0x88760384
    
    void* eax_1 = sub_460ea6(arg4, arg3, &var_8)
    arg4 = eax_1
    cond:5_1 = eax_1 s>= 0
else
    bool cond:4_1 = false
    
    while (i != 0)
        int32_t temp3_1 = *esi
        int32_t temp4_1 = *edi_1
        cond:4_1 = temp3_1 != temp4_1
        esi = &esi[1]
        edi_1 += 4
        i -= 1
        
        if (temp3_1 != temp4_1)
            break
    
    int32_t* var_18_1 = &var_8
    void* eax
    
    if (cond:4_1)
        eax = sub_484537(arg4, arg2, arg3, var_18_1)
    else
        eax = sub_460ef7(arg4, arg2, var_18_1)
    
    arg4 = eax
    cond:5_1 = eax s>= 0

if (not(cond:5_1))
    arg4 = 1

if (arg4 == 1)
    *arg5 = 0
    return 1

int32_t ebx_1 = 0

if (arg2 != 0)
    char* eax_4 = arg2
    void* edx_1 = &eax_4[1]
    char i_1
    
    do
        i_1 = *eax_4
        eax_4 = &eax_4[1]
    while (i_1 != 0)
    ebx_1 = _malloc(eax_4 - edx_1 + 1)
    
    if (ebx_1 == 0)
        return 0x8007000e
    
    int32_t esi_3
    int32_t edi_3
    edi_3, esi_3 = __builtin_memcpy(ebx_1, arg2, (eax_4 - edx_1 + 1) u>> 2 << 2)
    __builtin_memcpy(edi_3, esi_3, (eax_4 - edx_1 + 1) & 3)

void*** eax_8 = sub_745f3f(0x38)
int32_t* esi_4 = var_8
void*** eax_9

if (eax_8 == 0)
    eax_9 = nullptr
else
    eax_9 = sub_484987(eax_8, ebx_1, arg3, esi_4)

*arg5 = eax_9

if (eax_9 == 0)
    if (ebx_1 != 0)
        _free(ebx_1)
    
    arg4 = 0x8007000e

if (esi_4 != 0)
    (*(*esi_4 + 8))(esi_4)

return arg4
