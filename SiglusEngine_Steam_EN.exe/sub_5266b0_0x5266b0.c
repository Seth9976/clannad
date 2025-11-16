// 函数: sub_5266b0
// 地址: 0x5266b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t edi_1

if (arg4 == 0)
    edi_1 = 0
else
    edi_1 = *arg4

uint32_t var_8 = edi_1
sub_499600(arg5)
char eax = *(arg3 + 1)
void* esi_1 = arg3 + 1
int32_t ebx = 0
void* var_18 = esi_1

if (eax u< 0x80)
label_5266ef:
    
    if (eax == 0xa)
        edi_1 = zx.d(*(esi_1 + 1))
        esi_1 += 3
        var_8 = edi_1
        var_18 = esi_1
else if (eax u< 0xa0)
    if (eax u>= 0xfe)
        goto label_5266ef
else if (eax u<= 0xdf || eax u>= 0xfe)
    goto label_5266ef

int32_t edx = 0
bool cond:0 = data_108f348 != 0
void* ecx_1 = esi_1
void* var_c = ecx_1
int32_t eax_1
eax_1.b = cond:0
int32_t var_14 = 0
bool cond:1 = *esi_1 == 0x7d
int32_t var_10 = eax_1

if (not(cond:1))
    int32_t esi_2 = 0
    int32_t var_20
    
    do
        if (sub_5262c0(&var_c, ecx_1, arg5, &var_c, arg7, edx, &var_10, &var_8, &var_20, arg9, 0)
                == 0)
            esi_2 += 1
        
        ecx_1 = var_c
        
        if (var_20 != 0)
            ebx = 1
        
        edx = var_14 + 1
        var_14 = edx
    while (*ecx_1 != 0x7d)
    
    var_20 = ebx
    void* esi_3 = var_18
    
    if (esi_2 != 0)
        arg5[3] = arg6
        uint32_t eax_5 = edx * 0x2c
        arg5[2] = edx
        sub_4d6960(eax_5, &arg5[1], arg5, eax_5, "AVG_SEL")
        var_c = esi_3
        int32_t edi_3 = 0
        int32_t eax_6
        eax_6.b = data_108f348 != 0
        bool cond:4 = *esi_3 == 0x7d
        var_10 = eax_6
        
        if (not(cond:4))
            do
                sub_5262c0(&var_c, esi_3, arg5, &var_c, arg7, edi_3, &var_10, &var_8, nullptr, 
                    arg9, 1)
                esi_3 = var_c
                edi_3 += 1
            while (*esi_3 != 0x7d)
            
            ebx = var_20
        
        if (arg8 != 0)
            *arg8 = ebx
        
        if (arg2 != 0)
            *arg2 = esi_3 + 1
        
        if (arg4 != 0)
            *arg4 = var_8
        
        return 1
    
    edi_1 = var_8

if (arg2 != 0)
    *arg2 = ecx_1 + 1

uint32_t* eax_13 = arg4

if (eax_13 != 0)
    *eax_13 = edi_1

return 0
