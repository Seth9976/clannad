// 函数: sub_4d3ed0
// 地址: 0x4d3ed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_238
uint32_t dwLen = GetFileVersionInfoSizeA(arg3, &var_238)

if (dwLen == 0)
    dwLen.b = 0
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return dwLen

int32_t var_21c = 0
int32_t pBlock_1 = 0
int32_t ebx
ebx.b = 0
sub_4d6960(dwLen + 0x400, &pBlock_1, &var_21c, dwLen + 0x400, "FileVersionInfo")
GetFileVersionInfoA(arg3, var_238, dwLen, pBlock_1)
int32_t pBlock = pBlock_1
int16_t* lplpBuffer_1
uint32_t puLen
VerQueryValueA(pBlock, "\VarFileInfo\Translation", &lplpBuffer_1, &puLen)

if (puLen u>> 2 s> 0)
    int16_t* lplpBuffer_2 = lplpBuffer_1
    void var_210
    wsprintfA(&var_210, "\StringFileInfo\%04x%04x\ProductVersion", zx.d(*lplpBuffer_2), 
        zx.d(lplpBuffer_2[1]))
    int32_t lplpBuffer
    VerQueryValueA(pBlock, &var_210, &lplpBuffer, &pBlock_1)
    int32_t pBlock_2 = pBlock_1
    
    if (pBlock_2 != 0)
        int32_t var_218 = 0
        BOOL var_220 = 0
        BOOL eax_9 = sub_4d6960(pBlock_2 + 0x40, &var_220, &var_218, pBlock_2 + 0x40, 
            "FilePproductVersionStr")
        BOOL esi_1 = var_220
        sub_4d1c30(eax_9, lplpBuffer, esi_1, pBlock_1)
        ebx.b = 1
        *arg2 = var_218
        *arg4 = esi_1

sub_4d6c40(&var_21c, &pBlock_1)
int32_t eax_12
eax_12.b = ebx.b
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_12
