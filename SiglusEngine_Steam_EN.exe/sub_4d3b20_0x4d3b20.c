// 函数: sub_4d3b20
// 地址: 0x4d3b20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = nullptr
char* var_8 = nullptr
int32_t var_c = 0
char* edi = arg2

if (arg3 != 0)
    uint32_t eax = sub_4cfc80(arg3)
    arg1 = sub_4d6960(eax, &var_8, &var_c, eax, "EditerProc")
    esi = var_8
    sub_4d1c30(arg1, arg3, esi, eax)

char* ecx_2 = esi

if (esi != 0)
    while (true)
        arg1.b = *ecx_2
        
        if (arg1.b u>= 0x80 && (arg1.b u< 0xa0 || arg1.b u> 0xdf) && arg1.b u< 0xfe)
            ecx_2 = &ecx_2[2]
            continue
        
        if (arg1.b == 0)
            break
        
        if (arg1.b u>= 0x61 && arg1.b u<= 0x7a)
            arg1.b -= 0x20
            *ecx_2 = arg1.b
        
        ecx_2 = &ecx_2[1]

arg2.b = 0x5c
char* eax_1 = sub_4d1610(esi, arg2.b)
var_8 = eax_1

if (eax_1 != 0xffffffff)
    int32_t eax_2 = sub_4d0f10(&eax_1[1] + esi, "MIW.EXE")
    
    if (eax_2 == 0)
        sub_4d34a0(eax_2, edi, esi, arg4)
    
    int32_t eax_3 = sub_4d0f10(&var_8[1] + esi, "PEGGY.EXE")
    
    if (eax_3 == 0)
        sub_4d35c0(eax_3, edi, esi, arg4)
    
    int32_t eax_4 = sub_4d0f10(&var_8[1] + esi, "PEGGYPRO.EXE")
    
    if (eax_4 == 0)
        sub_4d35c0(eax_4, edi, esi, arg4)
        return sub_4d6c40(&var_c, &var_8)
    
    int32_t eax_6 = sub_4d0f10(&var_8[1] + esi, "WZEDITOR.EXE")
    
    if (eax_6 == 0)
        sub_4d3670(eax_6, edi, esi, arg4)
        return sub_4d6c40(&var_c, &var_8)
    
    int32_t eax_8
    int32_t ecx_24
    eax_8, ecx_24 = sub_4d0f10(&var_8[1] + esi, "WZEDIT32.EXE")
    
    if (eax_8 == 0)
        int32_t var_1c_5 = ecx_24
        sub_4d3720(esi)
        return sub_4d6c40(&var_c, &var_8)
    
    int32_t eax_10 = sub_4d0f10(&var_8[1] + esi, "HIDEMARU.EXE")
    
    if (eax_10 == 0)
        sub_4d3670(eax_10, edi, esi, arg4)
        return sub_4d6c40(&var_c, &var_8)
    
    int32_t eax_12 = sub_4d0f10(&var_8[1] + esi, "K2EDITOR.EXE")
    
    if (eax_12 == 0)
        sub_4d37d0(eax_12, edi, esi, arg4)
        return sub_4d6c40(&var_c, &var_8)
    
    int32_t eax_14 = sub_4d0f10(&var_8[1] + esi, "SAKURA.EXE")
    
    if (eax_14 == 0)
        sub_4d3880(eax_14, edi, esi, arg4)
        return sub_4d6c40(&var_c, &var_8)

int32_t eax_16 = sub_4d0f10(esi, "WORDPAD.EXE")

if (eax_16 == 0)
    sub_4d39e0(eax_16, edi, esi, arg4)
    return sub_4d6c40(&var_c, &var_8)

int32_t eax_18
int32_t ecx_45
eax_18, ecx_45 = sub_4d0f10(esi, "VC++")

if (eax_18 != 0)
    int32_t eax_21
    int32_t ecx_49
    eax_21, ecx_49 = sub_4d0f10(esi, "MIFES")
    
    if (eax_21 != 0)
        char* eax_24 = var_8
        
        if (eax_24 != 0xffffffff)
            int32_t eax_25 = sub_4d0f10(&eax_24[1] + esi, "EMEDITOR.EXE")
            
            if (eax_25 == 0)
                sub_4d3930(eax_25, edi, esi, arg4)
                return sub_4d6c40(&var_c, &var_8)
        
        sub_4d3a90(esi)
    else
        int32_t var_1c_11 = ecx_49
        HWND eax_22 = sub_4d33e0()
        
        if (eax_22 != 0)
            sub_4d3420(eax_22, edi)
else
    int32_t var_1c_10 = ecx_45
    HWND eax_19 = sub_4d33e0()
    
    if (eax_19 != 0)
        sub_4d3420(eax_19, edi)

return sub_4d6c40(&var_c, &var_8)
