// 函数: sub_69eec0
// 地址: 0x69eec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = data_bac438
int32_t edi = *(ebx + 0xc)
int32_t var_c = 0
void** eax = sub_669720(ebx + 0xc, arg2)
int32_t eax_3

if (eax != *(ebx + 0xc))
    void* eax_1 = &eax[4]
    int32_t ecx_1 = *(eax_1 + 0x10)
    
    if (eax[9] u>= 8)
        eax_1 = *eax_1
    
    int32_t var_1c_1 = ecx_1
    eax_3 = sub_536340(arg2, ecx_1, *(arg2 + 0x10), eax_1)

void** var_8

if (eax == *(ebx + 0xc) || eax_3 s< 0)
    var_8 = *(ebx + 0xc)
else
    var_8 = eax

void* var_24_2

if (var_8 != edi)
    void* esi_1 = data_bac510
    void* edx_3 = (var_8[0xa] << 6) + *(esi_1 + 0x10bdc)
    
    if (arg3 != 0)
        *arg3 = *(edx_3 + 0x30)
    
    if (arg4 != 0)
        int32_t ecx_4 = *(edx_3 + 0x34)
        
        if (ecx_4 s< 0)
            ecx_4 = *(esi_1 + 0xa2ebc0)
        
        *arg4 = ecx_4
    
    if (arg5 != 0)
        int32_t ecx_5 = *(edx_3 + 0x38)
        
        if (ecx_5 s< 0)
            ecx_5 = *(esi_1 + 0xa2ebb8)
        
        *arg5 = ecx_5
    
    if (arg6 != 0)
        int32_t ecx_6 = *(edx_3 + 0x3c)
        
        if (ecx_6 s< 0)
            ecx_6 = *(esi_1 + 0xa2ebbc)
        
        *arg6 = ecx_6
    
    int32_t var_1c_3 = 0xffffffff
    int32_t var_20_3 = 0
    var_24_2 = (var_8[0xa] << 6) + *(esi_1 + 0x10bdc) + 0x18
else
    if (arg3 != 0)
        *arg3 = 0xffffffff
    
    if (arg4 != 0)
        *arg4 = 0xffffffff
    
    if (arg5 != 0)
        *arg5 = 0xffffffff
    
    if (arg6 != 0)
        *arg6 = 0xffffffff
    
    int32_t var_1c_2 = 0xffffffff
    int32_t var_20_2 = 0
    var_24_2 = arg2

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
sub_52e3c0(arg1, var_24_2, 0, 0xffffffff)
return arg1
