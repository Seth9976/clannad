// 函数: sub_616b90
// 地址: 0x616b90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx
ebx.b = 0
int32_t eax_2 = sub_616cd0(*arg1, arg1[1])
int32_t edi = eax_2

if (edi == 0xffffffff)
    *arg1 = 0x64
    edi = eax_2 + 3
    arg1[1] = 0x64
    ebx.b = 1

int32_t eax_3 = GetSystemMetrics(SM_CXVIRTUALSCREEN)
int32_t var_2c = GetSystemMetrics(SM_CYVIRTUALSCREEN)

if (edi != 0)
    char* esi_1 = data_bac4a0
    
    while (true)
        int32_t var_3c = *(esi_1 + 8)
        int32_t eax_5 = *(esi_1 + 0xc)
        int32_t var_38_1 = eax_5
        int32_t ecx_1
        int32_t var_20
        int32_t var_1c
        
        if (edi u> 4)
            ecx_1 = *(esi_1 + 8)
            var_20 = ecx_1
            var_1c = eax_5
        else
            sub_616db0(eax_5, &var_3c, &var_20, edi)
            eax_5 = var_1c
            ecx_1 = var_20
        RECT rect
        rect.bottom = eax_5
        rect.left = 0
        rect.top = 0
        rect.right = ecx_1
        BOOL bMenu
        bMenu.b = *esi_1 != 0
        AdjustWindowRect(&rect, 0x12ce0000, bMenu)
        esi_1 = data_bac4a0
        int32_t var_28
        int32_t* ecx_2 = &var_28
        int32_t edx_3 = rect.bottom - rect.top
        int32_t var_44 = *(esi_1 + 8)
        int32_t eax_7 = *(esi_1 + 0xc)
        int32_t var_40_1 = eax_7
        
        if (edi u> 4)
            var_28 = *(esi_1 + 8)
            int32_t var_24_1 = *(esi_1 + 0xc)
        else
            ecx_2 = sub_616db0(eax_7, &var_44, ecx_2, edi)
        
        int32_t var_48_2 = ecx_2[1]
        
        if (*ecx_2 s<= eax_3 && edx_3 s<= var_2c)
            break
        
        ebx.b = 1
        int32_t temp0_1 = edi
        edi -= 1
        
        if (temp0_1 == 1)
            goto label_616cb4

if (ebx.b != 0)
label_616cb4:
    sub_616d40(edi, arg1)

int32_t result
result.b = ebx.b
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
