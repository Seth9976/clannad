// 函数: sub_6b43d0
// 地址: 0x6b43d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cadb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lptstrFilename_1 = arg2
bool cond:0 = lptstrFilename_1[5] u< 8
int32_t var_54 = 0
uint32_t var_40 = 0
PWSTR lptstrFilename

if (cond:0)
    lptstrFilename = lptstrFilename_1
else
    lptstrFilename = *lptstrFilename_1

uint32_t dwLen = GetFileVersionInfoSizeW(lptstrFilename, &var_40)

if (dwLen != 0)
    int32_t var_50
    sub_5b9470(&var_50, dwLen)
    int32_t var_8_1 = 0
    int32_t esi_1 = var_50
    int32_t lpData = esi_1
    int32_t var_4c
    
    if (esi_1 == var_4c)
        lpData = 0
    
    if (lptstrFilename_1[5] u>= 8)
        lptstrFilename_1 = *lptstrFilename_1
    
    GetFileVersionInfoW(lptstrFilename_1, var_40, dwLen, lpData)
    int16_t* lplpBuffer = nullptr
    int32_t pBlock = esi_1
    uint32_t puLen = 0
    
    if (esi_1 == var_4c)
        pBlock = 0
    
    VerQueryValueW(pBlock, u"\VarFileInfo\Translation", &lplpBuffer, &puLen)
    
    if (puLen u>= 4)
        int16_t* lplpBuffer_3 = lplpBuffer
        int16_t* lplpBuffer_1 = nullptr
        uint32_t puLen_1 = 0
        uint32_t var_68_6 = zx.d(lplpBuffer_3[1])
        uint32_t var_6c_3 = zx.d(*lplpBuffer_3)
        void var_84
        sub_52e820(&var_84, u"\StringFileInfo\%04x%04x\ProductVersion")
        PWSTR lpSubBlock_1
        sub_6ae4c0(&lpSubBlock_1, var_84)
        var_8_1.b = 1
        PWSTR lpSubBlock = &lpSubBlock_1
        int32_t pBlock_1 = esi_1
        int32_t var_18
        
        if (var_18 u>= 8)
            lpSubBlock = lpSubBlock_1
        
        if (esi_1 == var_4c)
            pBlock_1 = 0
        
        VerQueryValueW(pBlock_1, lpSubBlock, &lplpBuffer_1, &puLen_1)
        int16_t* lplpBuffer_2
        
        lplpBuffer_2 = puLen_1 != 0 ? lplpBuffer_1 : &data_ad7c90
        
        sub_52e820(arg1, lplpBuffer_2)
        
        if (var_18 u>= 8)
            j__free(lpSubBlock_1)
        
        int32_t var_18_1 = 7
        lpSubBlock_1.w = 0
        int32_t var_1c_1 = 0
    else
        sub_52e820(arg1, &data_ad7c90)
    
    if (esi_1 != 0)
        j__free(esi_1)
else
    sub_52e820(arg1, &data_ad7c90)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
